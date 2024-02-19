/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:14:40 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/19 03:29:17 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const std::string fileStr)
{
	this->_ratesFile.open(fileStr);
	if (this->_ratesFile.fail() == true)
		throw std::runtime_error("Error opening rates file.");
	this->_rates = this->parseDateValueMap(this->_ratesFile);
	this->_ratesFile.close();
	if (this->_rates.empty())
		throw std::runtime_error("Error parsing exchange rates file.");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &	BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_rates = other._rates;	
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void )
{
	if (this->_ratesFile.is_open())
		this->_ratesFile.close();
	if (this->_exchangesFile.is_open())
		this->_exchangesFile.close();
}

/* ------------------- Class Methods ------------------*/

void	BitcoinExchange::convert(std::tm date, float value)
{
	std::map<std::tm, float>::reverse_iterator	it = this->_rates.rbegin();

	while (it != this->_rates.rend())
	{
		std::tm	dbDate = (*it).first;
		float	dbValue = (*it).second;

		if ((dbDate.tm_year < date.tm_year) 
			|| (dbDate.tm_year == date.tm_year && dbDate.tm_yday <= date.tm_yday))
		{
			std::cout << (dbValue * value);
			break ;
		}
		it++;
	}
	if (it == this->_rates.rend())
		std::cout << "No records";
}

void	BitcoinExchange::identifyLine(std::string line)
{
	unsigned int		i = 0;
	float				value;
	std::string			sdate;
	std::string			svalue;
	std::tm				date;
	std::istringstream ss;
    

	while (i < line.length() && line.at(i) != '|')
		i++;
	if (line.length() < 1 || i >= (line.length() - 1))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	sdate = line.substr(0, i);
	svalue = line.substr(i + 1, line.length());
	if (!isDouble(svalue))
	{
		std::cout << "Error: invalid value => " << svalue << std::endl;
		return;
	}
	value = std::atof(svalue.c_str());
	if (value < MIN_VALUE || value > 1000)
	{
		std::cout << "Error: value out of range [0, 1000] => " << value << std::endl;
		return;
	}
	ss.str(sdate);
	ss >> std::get_time(&date, "%Y-%m-%d");
	if (ss.fail())
	{
		std::cout << "Error: invalid date => " << sdate << std::endl;
		return;
	}
	date.tm_yday = yearToDays(date.tm_year, date.tm_mon, date.tm_mday);
	std::cout << date.tm_year + 1900 << "-" << date.tm_mon + 1 << "-" << date.tm_mday << " => "
				<< value << " = ";
	this->convert(date, value);
	std::cout << std::endl;
}

void	BitcoinExchange::doExchange(const std::string exchangeStr)
{
	std::string	line;
	if (this->_exchangesFile.is_open())
		this->_exchangesFile.close();
	this->_exchangesFile.open(exchangeStr);
	if (this->_exchangesFile.fail() == true)
		throw std::runtime_error("Error opening exchange file.");
	
	//Check optional header "date | value"
	std::getline(this->_exchangesFile, line, '\n');
	if (line != "date | value")
		this->identifyLine(line);
	//Read rest of the file
	while (std::getline(this->_exchangesFile, line, '\n'))
	{
		this->identifyLine(line);
	}
	if (this->_exchangesFile.bad() || !this->_exchangesFile.eof())
		throw std::runtime_error("Error reading exchange file");
}

int	BitcoinExchange::lineToMap(std::string line, std::pair<std::tm, float> & node)
{
	unsigned int	i = 0;
	std::string		sdate;
	std::string		svalue;
	std::istringstream ss;
    

	while (i < line.length() && line.at(i) != ',')
		i++;
	if (line.length() < 1 || i >= (line.length() - 1))
		return (0);
	sdate = line.substr(0, i);
	svalue = line.substr(i + 1, line.length());
	if (!isDouble(svalue))
		return (0);
	node.second = std::atof(svalue.c_str());
	if (node.second < MIN_VALUE || node.second > std::numeric_limits<int>::max())
		return (0);
	ss.str(sdate);
	ss >> std::get_time(&node.first, "%Y-%m-%d");
	if (ss.fail())
		return (0);
	node.first.tm_yday = yearToDays(node.first.tm_year, node.first.tm_mon, node.first.tm_mday);
	return (1);
}

std::map<std::tm, float>	BitcoinExchange::parseDateValueMap(std::ifstream & file)
{
	std::string					line;
	std::pair<std::tm, float>	tmp;
	std::map<std::tm, float>	rMap;

	//Check optional header "date,exchange_rate"
	std::getline(file, line, '\n');
	if (this->lineToMap(line, tmp))
		rMap.insert(tmp);
	//Read rest of the file
	while (std::getline(file, line, '\n'))
	{
		if (this->lineToMap(line, tmp) != 1)
			return (std::map<std::tm, float>());
		rMap.insert(tmp);
	}
	if (file.bad() || !file.eof())
		return (std::map<std::tm, float>());
	return (rMap);
}

void	BitcoinExchange::loadRatesFile(const std::string fileStr)
{
	if (this->_ratesFile.is_open())
		this->_ratesFile.close();
	this->_ratesFile.open(fileStr);
	if (this->_ratesFile.fail() == true)
		throw std::runtime_error("Error opening rates file.");
	this->_rates = this->parseDateValueMap(this->_ratesFile);
	this->_ratesFile.close();
	if (this->_rates.empty())
		throw std::runtime_error("Error parsing exchange rates file.");
}

/* ------------------- HELPERS ------------------*/

/* unsigned int	dateToDays(std::tm date)
{
	unsigned int	totalDays = 0;
	int				rYear = date.tm_year;

	totalDays += yearToDays(rYear + 1900, date.tm_mon, date.tm_mday);
	rYear--;
	while (rYear)
	{
		totalDays += yearToDays(rYear + 1900, 11, 31);
		rYear--;
	}
	return (totalDays);
} */

bool operator<(const std::tm& t1, const std::tm& t2)
{
	if (t1.tm_year < t2.tm_year)
		return (true);
	else if (t1.tm_year == t2.tm_year && t1.tm_yday < t2.tm_yday)
		return (true);
    return (false);
}

bool	isDouble(const std::string & value)
{
	int		i = 0;
	bool	point = false;
	int		strLen = value.length();
	
	while (std::isspace(value.at(i)))
		i++;
	if (value.at(i) == '-' || value.at(i) == '+')
		i++;
	while(i < strLen)
	{
		if (!std::isdigit(value.at(i)))
		{
			if (value.at(i) != '.' || point == true)
				break;
			else if (value.at(i) == '.')
				point = true;
		}
		i++;
	}
	if (i == strLen)
		return (true);
	return (false);
}

bool	isLeapYear(int year)
{
	if (year % 400 == 0)
		return (true);
	if (year % 100 == 0)
		return (false);
	if (year % 4 == 0)
		return (true);
	return (false);
}

int	yearToDays(int year, int month, int days)
{
	int	daysYear = 0;
	int	daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isLeapYear(year))
		daysInMonth[1] = 29;
	month--;
	while (month >= 0)
	{
		daysYear += daysInMonth[month];
		month--;
	}
	daysYear += days;
	return (daysYear);
}

/* ------------------- MEMBER FUNCTIONS ------------------*/



/*---------------------- OPERATORS -----------------------*/


/*--------------------- EXCEPTIONS ----------------------*/

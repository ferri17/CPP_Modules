/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:14:40 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/16 17:21:46 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(std::string fileStr)
{
	this->_ratesFilename = fileStr;
	this->_rates.open(this->_ratesFilename.c_str());
	if (this->_rates.fail() == true)
	{
		std::cerr << "Error opening file." << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &	BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_ratesFilename = other._ratesFilename;
		if (other._rates.is_open())
		{
			this->_rates.open(this->_ratesFilename.c_str());
			if (this->_rates.fail() == true)
			{
				std::cerr << "Error opening file." << std::endl;
			}
		}
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void )
{
}

void	BitcoinExchange::loadRatesFile(std::string fileStr)
{
	if (this->_rates.is_open())
		this->_rates.close();
	else
	{
		this->_ratesFilename = fileStr;
		this->_rates.open(this->_ratesFilename.c_str());
		if (this->_rates.fail() == true)
		{
			std::cerr << "Error opening file." << std::endl;
		}
	}
}

void	BitcoinExchange::printFile(void)
{
	if (this->_rates.is_open())
	{
		std::cout << "---file contents---\n";
		std::cout << this->_rates.rdbuf();
		std::cout << "---end contents---\n";
	}
}


/* ------------------- MEMBER FUNCTIONS ------------------*/



/*---------------------- OPERATORS -----------------------*/


/*--------------------- EXCEPTIONS ----------------------*/


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/10 20:32:32 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	myIsPrint(int c)
{
	if (c >= std::numeric_limits<unsigned char>::min() && c <= std::numeric_limits<unsigned char>::max())
		return (std::isprint(c));
	return (false);
}

void	convertToChar(const std::string & value, const dataType type)
{
	std::cout << "char: ";
	if (type == _CHAR_P)
	{
		if (myIsPrint(value.at(0)))
			std::cout << "'" << value << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else if (type == _INT_P || type == _FLOAT_P || type == _DOUBLE_P)
	{
		int	nb_i;
		
		if (type == _INT_P)
			nb_i = std::atoi(value.c_str());
		else if (type == _FLOAT_P)
			nb_i = static_cast<int>(std::atof(value.c_str()));
		else
		{
			double	nb_d = std::atof(value.c_str());
			nb_i = static_cast<int>(nb_d);
		}
		if (myIsPrint(nb_i))
			std::cout << "'" << static_cast<char>(nb_i) << "'" << std::endl;
		else if (nb_i >= std::numeric_limits<char>::min() && nb_i <= std::numeric_limits<char>::max())
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	convertToInt(const std::string & value, const dataType type)
{
	float	nb_f;
	double	nb_d;

	std::cout << "int: ";
	if (type == _INT_P)
		std::cout << std::atoi(value.c_str()) << std::endl;
	else if (type == _CHAR_P)
		std::cout << static_cast<int>(value.at(0)) << std::endl;
	else if (type == _FLOAT_P)
	{

		nb_f = std::atof(value.c_str());
		if (nb_f > std::numeric_limits<int>::max() || nb_f < std::numeric_limits<int>::min() || value == "nanf")
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(nb_f) << std::endl;
	}
	else if (type == _DOUBLE_P)
	{
		nb_d = std::atof(value.c_str());
		if (nb_d > std::numeric_limits<int>::max() || nb_d < std::numeric_limits<int>::min() || value == "nan")
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(nb_d) << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	convertToFloat(const std::string & value, const dataType type)
{
	double	nb_d;

	std::cout << "float: ";
	if (type == _FLOAT_P || type == _DOUBLE_P)
	{
		nb_d = std::atof(value.c_str());
		if (nb_d > std::numeric_limits<float>::max())
			std::cout <<  "+inff" << std::endl;
		else if (nb_d < -std::numeric_limits<float>::max())
			std::cout <<  "-inff" << std::endl;
		else
			std::cout << nb_d << "f" << std::endl;
	}
	else if (type == _CHAR_P)
		std::cout << static_cast<int>(value.at(0)) << ".0f" << std::endl;
	else if (type == _INT_P)
		std::cout << std::atoi(value.c_str()) << ".0f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	convertToDouble(const std::string & value, const dataType type)
{
	double	nb_d;

	std::cout << "double: ";
	if (type == _DOUBLE_P || type == _FLOAT_P)
	{
		nb_d = std::atof(value.c_str());
		if (nb_d > std::numeric_limits<double>::max())
			std::cout <<  "+inf" << std::endl;
		else if (nb_d < -std::numeric_limits<double>::max())
			std::cout <<  "-inf" << std::endl;
		else
			std::cout << nb_d << std::endl;
	}
	else if (type == _CHAR_P)
		std::cout << static_cast<int>(value.at(0)) << ".0" << std::endl;
	else if (type == _INT_P)
		std::cout << std::atoi(value.c_str()) << ".0" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

bool	isChar(const std::string & value)
{
	if (value.length() == 1 && !std::isdigit(value.at(0)))
		return (true);
	return (false);
}

bool	isInt(const std::string & value)
{
	const char	*str = value.c_str();
	char	*endptr;
	long	nb = std::strtol(str, &endptr, 10);
	
	if (endptr != str && *endptr == '\0' && nb <= std::numeric_limits<int>::max() && nb >= std::numeric_limits<int>::min())
		return (true);
	return (false);
}

bool	isFloat(const std::string & value)
{
	int		i = 0;
	bool	point = false;
	int		strLen = value.length();
	
	if (value == "-inff" || value == "+inff" || value == "nanf")
		return (true);
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
	if (i == (strLen - 1) && value.at(i) == 'f' && point == true)
		return (true);
	return (false);
}

bool	isDouble(const std::string & value)
{
	int		i = 0;
	bool	point = false;
	int		strLen = value.length();
	
	if (value == "-inf" || value == "+inf" || value == "nan")
		return (true);
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
	if (i == strLen && point == true)
		return (true);
	return (false);
}

dataType	getType(const std::string & value)
{
	dataType	type = _NONE_P;

	if (value.empty() || std::isspace(value.at(0)))
		return (type);
	if (isChar(value))
		type = _CHAR_P;
	else if (isInt(value))
		type = _INT_P;
	else if (isFloat(value))
		type = _FLOAT_P;
	else if (isDouble(value))
		type = _DOUBLE_P;
	return (type);
}

void	ScalarConverter::convert(const std::string & value)
{
	dataType	type;
	
	std::cout << std::fixed;
	type = getType(value);
	convertToChar(value, type);
	convertToInt(value, type);
	convertToFloat(value, type);
	convertToDouble(value, type);
}

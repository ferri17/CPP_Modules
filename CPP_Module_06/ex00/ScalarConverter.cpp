/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/09 00:48:43 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>

/* ------------ ORTHODOX CANONICAL CLASS FORM -------------*/

/* ------------------- MEMBER FUNCTIONS ------------------*/

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

//CHECK IF CHAR OR UNSIGNED CHAR
void	convertToChar(const std::string & value, const dataType type)
{
	std::cout << "char: ";
	if (type == _CHAR_P)
	{
		if (std::isprint(value.at(0)))
			std::cout << value << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else if (type == _INT_P)
	{
		int	nb = std::atoi(value.c_str());
		
		if (std::isprint(nb))
			std::cout << static_cast<char>(nb) << std::endl;
		else if (nb >= CHAR_MIN && nb <= CHAR_MAX)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else if (type == _NONE_P)
		std::cout << "impossible" << std::endl;
}

void	convertToInt(const std::string & value, const dataType type)
{
	std::cout << "int: ";
	if (type == _INT_P)
		std::cout << value << std::endl;
	else if (type == _CHAR_P)
		std::cout << static_cast<int>(value.at(0)) << std::endl;
	else if (type == _NONE_P)
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
	
	if (endptr != str && *endptr == '\0' && nb <= INT_MAX && nb >= INT_MIN)
		return (true);
	return (false);
}

bool	isFloat(const std::string & value)
{
	std::istringstream	iss(value);
	float	f;
	char	c;

	iss >> f;
	iss.get(c);
	std::cout << value.back() << std::endl;
	if (value == "-inff" || value == "+inff")
		return (true);
	else if (value.back() == 'f' && iss.get() == 'f')
		return (true);
	return (false);
}

dataType	ScalarConverter::getType(const std::string & value)
{
	dataType	type = _NONE_P;

	if (value.empty() || std::isspace(value.at(0)))
		return (type);
	if (isChar(value))
		type = _CHAR_P;
	else if (isInt(value))
		type = _INT_P;
	else if (isFloat(value))
	{
		std::cout << "valid float" << std::endl;
		type = _FLOAT_P;
	}
	return (type);
}

void	ScalarConverter::convert(const std::string & value)
{
	dataType	type;

	std::cout << "value sent: " << value << std::endl;
	type = getType(value);
	convertToChar(value, type);
	convertToInt(value, type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/07 01:45:49 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ------------ ORTHODOX CANONICAL CLASS FORM -------------*/

/* ------------------- MEMBER FUNCTIONS ------------------*/

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

void	convertToChar(const std::string & value, const dataType type)
{
	std::cout << "char: ";
	if (type == _CHAR_P)
		std::cout << value << std::endl;
	else if (type == _INT_P)
	{
		int	nb = std::atoi(value.c_str());
		if (std::isprint(nb))
			std::cout << static_cast<char>(nb) << std::endl;
	}
}

dataType	ScalarConverter::getType(const std::string & value)
{
	dataType	type = _INT_P;

	if (value.length() == 1 && !std::isdigit(value.at(0)))
		type = _CHAR_P;
	
	return (type);
}

void	ScalarConverter::convert(const std::string & value)
{
	/* char	c;
	int		nb;
	float	fl;
	double	db; */
	dataType	type;

	std::cout << "value sent: " << value << std::endl;
	type = _INT_P;
	convertToChar(value, type);
	//std::cout << "char: " << convertToChar(value) << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/07 21:02:06 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ------------ ORTHODOX CANONICAL CLASS FORM -------------*/

/* ------------------- MEMBER FUNCTIONS ------------------*/

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

void	convertToChar(const std::string & value)
{
	int	ascii;
	
	try
	{
		ascii = std::stoi(value);
		std::cout << "num: " << ascii << std::endl;
		if (ascii > 127 || ascii < 0)
			std::cout << "char: impossible" << std::endl;
		else
		{
			if (std::isprint(ascii))
				std::cout << "char: " << static_cast<char>(ascii) << std::endl;
			else
				std::cout << "char: non-printable" << std::endl;
		}

	}
	catch(const std::exception& e)
	{
		if (value.length() == 1)
			std::cout << "char: " << value << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
}

void	ScalarConverter::convert(const std::string & value)
{
	/* char	c;
	int		nb;
	float	fl;
	double	db; */
	convertToChar(value);
	//std::cout << "char: " << convertToChar(value) << std::endl;
}

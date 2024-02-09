/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/09 17:37:45 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	testing(void)
{
	ScalarConverter::convert("-0.5454f");
	ScalarConverter::convert("2144545");
	ScalarConverter::convert("*");
	ScalarConverter::convert("42.0f");
	ScalarConverter::convert("7762489424379839247843672387823478924378324.321");
	ScalarConverter::convert("-312783217689239789");
	ScalarConverter::convert("8975238972438972398798527397580349870439834.f");
	ScalarConverter::convert("0.0000000000");
	ScalarConverter::convert("0.00000000000000000000000000001f");
	ScalarConverter::convert("2144545");
	ScalarConverter::convert("hola");
	ScalarConverter::convert("9");
	ScalarConverter::convert("-inf");
	ScalarConverter::convert("+inf");
	ScalarConverter::convert("-inff");
	ScalarConverter::convert("+inff");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("nanf");
}

int	main(int ac, char **av)
{	
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else if (ac == 1)
		testing();
	else
		std::cerr << "Invalid arguments" << std::endl;
	return (0);
}

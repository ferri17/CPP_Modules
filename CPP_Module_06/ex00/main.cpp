/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/10 20:34:00 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	testing(void)
{
	ScalarConverter::convert("-0.5454f");
	std::cout << std::endl;
	ScalarConverter::convert("2144545");
	std::cout << std::endl;
	ScalarConverter::convert("*");
	std::cout << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << std::endl;
	ScalarConverter::convert("7762489424379839247843672387823478924378324.321");
	std::cout << std::endl;
	ScalarConverter::convert("-312783217689239789");
	std::cout << std::endl;
	ScalarConverter::convert("8975238972438972398798527397580349870439834.f");
	std::cout << std::endl;
	ScalarConverter::convert("0.0000000000");
	std::cout << std::endl;
	ScalarConverter::convert("0.00000000000000000000000000001f");
	std::cout << std::endl;
	ScalarConverter::convert("2144545");
	std::cout << std::endl;
	ScalarConverter::convert("hola");
	std::cout << std::endl;
	ScalarConverter::convert("9");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;
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

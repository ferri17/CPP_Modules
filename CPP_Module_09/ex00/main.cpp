/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/19 02:12:31 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{	
	BitcoinExchange	bitcoinExchange;

	std::cout << std::fixed;
    std::cout << std::setprecision(2);
	if (ac == 2)
	{
		try
		{
			bitcoinExchange.loadRatesFile("data.csv");
			bitcoinExchange.doExchange(av[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;;
		}
	}
	else
		std::cerr << "Invalid number of arguments. './btc [exchanges file]'" << std::endl;
	return (0);
}

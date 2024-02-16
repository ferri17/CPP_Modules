/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/16 17:19:58 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>

class	BitcoinExchange
{
	private:
		std::string		_ratesFilename;
		std::ifstream	_rates;
	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string fileStr);
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange &	operator=(const BitcoinExchange & other);
		~BitcoinExchange(void);

		void	loadRatesFile(std::string fileStr);
		void	printFile();
};

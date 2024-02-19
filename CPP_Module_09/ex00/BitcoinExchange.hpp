/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/19 03:12:31 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <exception>
#include <map>
#include <ctime>
#include <sstream>
#include <string>

#define MIN_VALUE 0
#define MAX_VALUE 1000

bool			operator<(const std::tm& t1, const std::tm& t2);
bool			isDouble(const std::string & value);
bool			isLeapYear(int year);
int				yearToDays(int year, int month, int days);

class	BitcoinExchange
{
	private:
		std::ifstream				_ratesFile;
		std::ifstream				_exchangesFile;
		std::map<std::tm, float>	_rates;

		std::map<std::tm, float>	parseDateValueMap(std::ifstream & file);
		int							lineToMap(std::string line, std::pair<std::tm, float> & node);
		void						identifyLine(std::string line);
		void						convert(std::tm date, float value);
	public:
		BitcoinExchange(void);
		BitcoinExchange(const std::string fileStr);
		BitcoinExchange(const BitcoinExchange & other);
		BitcoinExchange &	operator=(const BitcoinExchange & other);
		~BitcoinExchange(void);

		void	loadRatesFile(const std::string fileStr);
		void	doExchange(const std::string exchangeStr);
};

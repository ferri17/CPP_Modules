/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/17 01:56:37 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(void)
{
	std::map<std::string, int>	m;

	m["19-02-32"] = 1;
	m["20-02-32"] = 10;
	for (std::map<std::string, int>::iterator it = m.begin(); it != m.end(); it++)
		std::cout << it->first << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:00:50 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/27 01:31:25 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( void ) {

	return ;
}

Account::~Account( void ) {

	return ;
}

Account::Account( int initial_deposit ) {

	static int	index = 0;
	std::time_t now = std::time(nullptr);
    std::tm* time_info = std::localtime(&now);

    std::cout << std::put_time(time_info, "[%Y%m%d_%H%M%S] ");
	std::cout << "index:" << index << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
	index++;
}

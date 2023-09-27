/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 01:00:50 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/27 21:09:02 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void ) {

	return ;
}

Account::~Account( void ) {

	return ;
}

Account::Account( int initial_deposit ) {
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

int	Account::getNbAccounts( void ){
	
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
	
	return (_totalAmount);
}

int	Account::getNbDeposits( void ){
	
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ){
	
	std::time_t now = std::time(nullptr);
    std::tm* time_info = std::localtime(&now);
    std::cout << std::put_time(time_info, "[%Y%m%d_%H%M%S] ");
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
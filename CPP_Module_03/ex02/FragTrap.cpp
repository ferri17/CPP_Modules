/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:40:03 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/16 00:43:01 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* 
 * ------------------------------- CLASS BASE -------------------------------
 */
FragTrap::FragTrap( void ) {

	std::cout << "	- FragTrap Default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
}

FragTrap::FragTrap( std::string name) {
	
	std::cout << "	- FragTrap " << name << " Name constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
}

FragTrap::FragTrap( const FragTrap & other ) {
	
	std::cout << "	- FragTrap Copy constructor called." << std::endl;
	*this = other;
}

FragTrap &	FragTrap::operator=( const FragTrap & other ) {

	std::cout << "	- FragTrap Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

FragTrap::~FragTrap() {

	std::cout << "	- FragTrap Default destructor called." << std::endl;
}

/* 
 * ------------------------------- MEMBER FUNCTIONS -------------------------------
 */
void	FragTrap::highFivesGuys( void ) {

	if (_hitPoints < 1)
		std::cout << "	- FragTrap " << _name << " is dead. Cannot request a high five." << std::endl;
	else
		std::cout << "	- FragTrap " << _name << " requests a high five!" << std::endl;
}

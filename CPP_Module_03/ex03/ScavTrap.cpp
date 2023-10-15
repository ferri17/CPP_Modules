/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:40:03 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/15 22:31:01 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* 
 * ------------------------------- CLASS BASE -------------------------------
 */
ScavTrap::ScavTrap( void ) {

	std::cout << "	- ScavTrap Default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
}

ScavTrap::ScavTrap( std::string name) {
	
	std::cout << "	- ScavTrap " << name << " Name constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
}

ScavTrap::ScavTrap( const ScavTrap & other ) {
	
	std::cout << "	- ScavTrap Copy constructor called." << std::endl;
	*this = other;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap & other ) {

	std::cout << "	- ScavTrap Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

ScavTrap::~ScavTrap() {

	std::cout << "	- ScavTrap Default destructor called." << std::endl;
}

/* 
 * ------------------------------- MEMBER FUNCTIONS -------------------------------
 */
void	ScavTrap::attack( const std::string& target ) {

	if (_hitPoints < 1)
		std::cout << "	- ScavTrap " << _name << " is dead. Cannot attack." << std::endl;
	else if (_energyPoints < 1)
		std::cout << "	- ScavTrap " << _name << " has no energy, it couldn't attack" << std::endl;
	else
	{
		std::cout << "	- ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate() {
	if (_hitPoints < 1)
		std::cout << "	- ScavTrap " << _name << " is dead. Cannot switch to Gate keeper mode." << std::endl;
	else
		std::cout << "	- ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

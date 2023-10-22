/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/20 20:12:01 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/

ClapTrap::ClapTrap( void ) : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDmg(0) {

	std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0) {

	std::cout << "ClapTrap Name constructor called." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) {

	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = other;
}

ClapTrap &	ClapTrap::operator=( const ClapTrap &other ) {

	std::cout << "ClapTrap Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "ClapTrap Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

void	ClapTrap::attack( const std::string& target ) {

	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is dead. Cannot attack." << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " has no energy, it couldn't attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is dead. Cannot take damage." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " has taken " << amount << " damage points!" << std::endl;
		if (amount >= _hitPoints)
		{
			std::cout << "ClapTrap " << _name << " is dead. Rest in peace." << std::endl;
			_hitPoints = 0;
		}
		else
			_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	
	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is dead. Cannot get repaired." << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " has no energy, it couldn't get repaired." << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points back." << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
}

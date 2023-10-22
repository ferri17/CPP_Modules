/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:29:00 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/22 02:14:09 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* 
 * ------------------------------- CLASS BASE -------------------------------
 */
DiamondTrap::DiamondTrap( void ) : ClapTrap( "Default_clap_name" ){

	std::cout << "		- DiamondTrap Default constructor called." << std::endl;
	this->DiamondTrap::_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 30;
}

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap( name + "_clap_name" ) {

	std::cout << "		- DiamondTrap Name constructor called." << std::endl;
	this->DiamondTrap::_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 30;
}

DiamondTrap::DiamondTrap( DiamondTrap const & other ) {
	
	std::cout << "	- DiamondTrap Copy constructor called." << std::endl;
	*this = other;
}

DiamondTrap &	DiamondTrap::operator=( const DiamondTrap & other ) {

	std::cout << "		- DiamondTrap Copy assignment operator called." << std::endl;
	if (this == &other)
		return (*this);
	this->ClapTrap::_name = other.ClapTrap::_name;
	this->DiamondTrap::_name = other.DiamondTrap::_name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "		- DiamondTrap Default destructor called." << std::endl;
}

/* 
 * ------------------------------- MEMBER FUNCTIONS -------------------------------
 */
void	DiamondTrap::whoAmI( void ) {

	std::cout << "		- ClapTrap -> " << ClapTrap::_name << " ------ DiamondTrap -> " << DiamondTrap::_name << std::endl;
}

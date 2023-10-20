/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:29:00 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/19 13:39:31 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "		x DiamondTrap Default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
}

DiamondTrap::DiamondTrap( std::string name ) {

	std::cout << "		x DiamondTrap Default constructor called." << std::endl;
	this->DiamondTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "		x DiamondTrap Default destructor called." << std::endl;
}
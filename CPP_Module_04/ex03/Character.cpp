/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:51:52 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 14:49:20 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#define COL_WIDTH 20

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Character::Character( void ) : _name("undefined") {

	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < SLOTS; i++)
		_inventory[i] = NULL;
}

Character::Character( std::string const & name ) : _name(name) {

	std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < SLOTS; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const &	other ) {

	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character &	Character::operator=( Character const &	other) {
	
	std::cout << "Character assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		for (int i = 0; i < SLOTS; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = other._inventory[i];
		}
	}
	return (*this);
}

Character::~Character( void ) {

	std::cout << "Character destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
std::string const &	Character::getName() const {

	return (this->_name);
}

void	Character::equip( AMateria* m ) {

	int	i;

	if (!m)
	{
		std::cout << "Unknown materia type, it couldn't be equipped." << std::endl;
		return ;
	}
	for (i = 0; i < SLOTS; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->getName() << " equipped " << m->getType() << " materia on slot " << i << std::endl;
			break ;
		}
	}
	if (i >= SLOTS)
		std::cout << this->getName() << " couldn't equip " << m->getType() << " materia. Inventory full" << std::endl;
}

void	Character::unequip( int idx ) {

	if (idx >= 0 && idx < SLOTS)
	{
		this->_inventory[idx] = NULL;
		std::cout << this->getName() << " unequipped materia on slot " << idx << std::endl;
	}
	else
		std::cout << "Couldn't unequip materia, slot " << idx << " doesn't exist" << std::endl;
}

void	Character::use( int idx, ICharacter & target ) {
	
	if (idx >= 0 && idx < SLOTS && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "No materia available on slot " << idx << " , couldn't use." << std::endl;
}

void	Character::printHUD( void ) {
	
	std::string	hudTitle = this->getName() + " HUD";

	std::cout << std::setw(COL_WIDTH * 4) << std::setfill('-') << "" << std::endl;
	std::cout << std::setw(COL_WIDTH * 4) << std::left << std::setfill(' ') << hudTitle << std::endl;
	std::cout << std::setw(COL_WIDTH * 4) << std::setfill('-') << "" << std::endl;
	
	std::cout << std::setw(COL_WIDTH) << std::right << std::setfill(' ') << "SLOT 0";
	std::cout << std::setw(COL_WIDTH) << std::right << std::setfill(' ') << "SLOT 1";
	std::cout << std::setw(COL_WIDTH) << std::right << std::setfill(' ') << "SLOT 2";
	std::cout << std::setw(COL_WIDTH) << std::right << std::setfill(' ') << "SLOT 3";
	std::cout << std::endl;
	std::cout << std::setw(COL_WIDTH * 4) << std::setfill('-') << "" << std::endl;

	for (int i = 0; i < SLOTS; i++)
	{
		std::cout << std::setw(COL_WIDTH) << std::right << std::setfill(' ') << (this->_inventory[i] ? this->_inventory[i]->getType() : "****");
	}
	std::cout << std::endl;
	std::cout << std::setw(COL_WIDTH * 4) << std::setfill('-') << "" << std::endl;
}


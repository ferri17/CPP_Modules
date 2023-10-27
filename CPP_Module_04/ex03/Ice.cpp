/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:58:34 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 12:23:09 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Ice::Ice( void ) : AMateria("ice") {

	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( Ice const & other ) {

	std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice &	Ice::operator=( Ice const & other) {
	
	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType(); //Probably redundant
	}
	return (*this);
}

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
Ice *	Ice::clone() const {
	
	return (new Ice());
}

void Ice::use( ICharacter & target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
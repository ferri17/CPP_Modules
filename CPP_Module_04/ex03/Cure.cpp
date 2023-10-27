/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:58:34 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 14:45:25 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Cure::Cure( void ) : AMateria("cure") {

	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( Cure const & other ) {

	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure &	Cure::operator=( Cure const & other) {
	
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType(); //Probably redundant
	}
	return (*this);
}

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
Cure *	Cure::clone() const {
	
	return (new Cure());
}

void Cure::use( ICharacter & target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

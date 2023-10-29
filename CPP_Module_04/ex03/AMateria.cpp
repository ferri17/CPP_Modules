/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:58:34 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/29 00:15:40 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
AMateria::AMateria( void ) : _type("undefined") {

	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type) : _type(type) {

	//std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & other ) {

	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria &	AMateria::operator=( AMateria const & other) {
	
	//std::cout << "AMateria assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other.getType(); //Probably redundant
	}
	return (*this);
}

AMateria::~AMateria( void ) {

	//std::cout << "AMateria destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
std::string const & AMateria::getType() const {
	
	return (this->_type);
}

void AMateria::use( ICharacter & target ) {

	std::cout << "* undefined AMateria action to " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 17:16:39 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
AAnimal::AAnimal( void ) : _type("unidentified Aanimal") {

	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & other ) {

	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal &	AAnimal::operator=( AAnimal const & other) {

	std::cout << "AAnimal assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

AAnimal::AAnimal( std::string const & type ) : _type(type) {

	std::cout << "AAnimal name constructor called" << std::endl;
}


AAnimal::~AAnimal( void ) {

	std::cout << "AAnimal destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
std::string	AAnimal::getType( void ) const {

	return (this->_type);
}

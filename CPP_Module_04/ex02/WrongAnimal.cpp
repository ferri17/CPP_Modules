/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/24 00:34:01 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
WrongAnimal::WrongAnimal( void ) : _type("unidentified WrongAnimal") {

	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other ) {

	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & other) {

	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal( std::string const & type ) : _type(type) {

	std::cout << "WrongAnimal name constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal( void ) {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	WrongAnimal::makeSound( void ) const {

	std::cout << "zyxxuiyx...Unidentified WrongAnimal sound..." << std::endl;
}

std::string	WrongAnimal::getType( void ) const {

	return (this->_type);
}

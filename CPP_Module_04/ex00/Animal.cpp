/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/23 01:07:04 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Animal::Animal( void ) : _type("unidentified animal") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( Animal const & other ) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &	Animal::operator=( Animal const & other) {

	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::Animal( std::string const & type ) : _type(type) {

	std::cout << "Animal name constructor called" << std::endl;
}


Animal::~Animal( void ) {

	std::cout << "Animal destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	Animal::makeSound( void ) const {

	std::cout << "zyxxuiyx...Unidentified animal sound..." << std::endl;
}

std::string	Animal::getType( void ) const {

	return (this->_type);
}

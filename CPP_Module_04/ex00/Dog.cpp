/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 15:12:36 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Dog::Dog( void ) : Animal("Dog") {

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( Dog const & other ) : Animal("Dog") {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &	Dog::operator=( Dog const & other) {

	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog( void ) {

	std::cout << "Dog destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	Dog::makeSound( void ) const {

	std::cout << "Woof! Woof!" << std::endl;
}

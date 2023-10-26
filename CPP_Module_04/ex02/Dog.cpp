/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 17:26:51 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Dog::Dog( void ) : AAnimal("Dog") {

	std::cout << "	- Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( Dog const & other ) : AAnimal("Dog") {

	std::cout << "	- Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = other;
}

Dog &	Dog::operator=( Dog const & other) {

	std::cout << "	- Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

Dog::~Dog( void ) {

	std::cout << "	- Dog destructor called" << std::endl;
	delete this->_brain;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	Dog::makeSound( void ) const {

	std::cout << "	- Woof! Woof!" << std::endl;
}

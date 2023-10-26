/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 17:26:45 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Cat::Cat( void ) : AAnimal("Cat") {

	std::cout << "	- Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( Cat const & other ) : AAnimal("Cat") {

	std::cout << "	- Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = other;
}

Cat &	Cat::operator=( Cat const & other) {

	std::cout << "	- Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		*(this->_brain) = *(other._brain);
	}
	return (*this);
}

Cat::~Cat( void ) {

	std::cout << "	- Cat destructor called" << std::endl;
	delete this->_brain;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	Cat::makeSound( void ) const {

	std::cout << "	- Miauuuuuuu!" << std::endl;
}

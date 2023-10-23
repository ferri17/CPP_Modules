/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/23 01:10:39 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Cat::Cat( void ) : Animal("Cat") {

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( Cat const & other ) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &	Cat::operator=( Cat const & other) {

	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat( void ) {

	std::cout << "Cat destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	Cat::makeSound( void ) const {

	std::cout << "Miauuuuuuu!" << std::endl;
}

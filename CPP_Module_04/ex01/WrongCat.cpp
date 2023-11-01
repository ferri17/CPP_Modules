/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/23 01:10:39 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal("WrongCat") {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat &	WrongCat::operator=( WrongCat const & other) {

	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat( void ) {

	std::cout << "WrongCat destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	WrongCat::makeSound( void ) const {

	std::cout << "Miauuuuuuu!" << std::endl;
}

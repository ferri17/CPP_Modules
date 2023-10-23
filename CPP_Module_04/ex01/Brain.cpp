/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/24 00:54:00 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Brain::Brain( void ) {

	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain const & other ) {

	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &	Brain::operator=( Brain const & other) {

	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < NB_IDEAS; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {

	std::cout << "Brain destructor called" << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

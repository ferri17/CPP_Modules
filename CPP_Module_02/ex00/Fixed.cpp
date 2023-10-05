/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/06 01:25:58 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &fixed ){
	
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed; 
}

Fixed	&Fixed::operator=( const Fixed &other ){
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_fixedPointValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ){
	
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( int const raw ){

	this->_fixedPointValue = raw;
}


int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

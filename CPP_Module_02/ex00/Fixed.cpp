/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/04 01:21:57 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ){
	
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ){
	
	_fixedPointValue = fixed.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

void	Fixed::operator=( const Fixed &fixed ){
	
	this->_fixedPointValue = fixed.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
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



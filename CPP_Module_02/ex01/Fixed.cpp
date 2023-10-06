/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/06 17:41:53 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawBits(0){
	
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ){
	
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed; 
}

Fixed::Fixed( const int nb ){
	
	this->setRawBits(nb << _fractionalBits);
}

Fixed::Fixed( const float nb ){
	
}

Fixed	&Fixed::operator=( const Fixed &other ){
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_rawBits = other.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ){
	
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( int const raw ){

	this->_rawBits = raw;
}


int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (_rawBits);
}

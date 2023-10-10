/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/11 01:12:45 by fbosch           ###   ########.fr       */
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
	
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nb << _fractionalBits);
}

Fixed::Fixed( const float nb ){

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::roundf(nb * (1 << _fractionalBits)));
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

	return (_rawBits);
}

float	Fixed::toFloat( void ) const{
	
	return (static_cast<float>(getRawBits()) / (1 << _fractionalBits));
}

int		Fixed::toInt( void ) const{
	
	return (this->getRawBits() >> _fractionalBits);
}

/*---------------------------------OPERATORS--------------------------------*/

std::ostream	&operator<<(std::ostream &out, const Fixed &nb){
	
	return (out << nb.toFloat());
}

bool	Fixed::operator<(const Fixed &other){

	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>(const Fixed &other){

	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other){

	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other){

	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other){

	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other){

	return (this->getRawBits() != other.getRawBits());
}

Fixed	&Fixed::operator++( void ){

	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

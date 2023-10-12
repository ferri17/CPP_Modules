/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:46:13 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/13 01:38:37 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( const float x, const float y ) : _x(x), _y(y) {}

Point::Point( const Point &other ) : _x(other.getX()), _y(other.getY()) {}

/*
	Private variables _x and _y are defined as const so "operator=" can't be 
	implemented since variables are not modifiable.
*/
Point	&Point::operator=( const Point &other){

	if (this == &other)
		return (*this);
	//static_cast<Fixed>(this->_x) = other.getX();
	//static_cast<Fixed>(this->_y) = other.getY();
	return (*this);
}

Point::~Point( void ) {}

Fixed	Point::getX( void ) const{

	return (this->_x);
}

Fixed	Point::getY( void ) const{

	return (this->_y);
}


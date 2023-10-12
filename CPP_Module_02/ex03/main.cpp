/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 14:18:12 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void){
	
	Fixed	a = 9234.23093f;
	Fixed	b = -23494.32323223f;
	Fixed	c = -3.0f;
	Fixed	d( 55 );
	Fixed	e( 3.24f );
	Fixed	f( e );
	Fixed	g;
	
	std::cout << "-----Printing everything------" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Testing comparison operators------" << std::endl;
	std::cout << "Is " << a << " smaller than " << b << ": " << (a < b) << std::endl;
	std::cout << "Is " << c << " smaller than " << a << ": " << (c < a) << std::endl;
	std::cout << "Is " << c << " greater than " << a << ": " << (c > a) << std::endl;
	std::cout << "Is " << d << " greater than " << f << ": " << (d > f) << std::endl;
	std::cout << "Is " << f << " smaller or equal than " << e << ": " << (f <= e) << std::endl;
	std::cout << "Is " << c << " smaller or equal than " << b << ": " << (c <= b) << std::endl;
	std::cout << "Is " << c << " greater or equal than " << b << ": " << (c >= b) << std::endl;
	std::cout << "Is " << g << " greater or equal than " << c << ": " << (g >= c) << std::endl;
	std::cout << "Is " << g << " equal to " << c << ": " << (g == c) << std::endl;
	std::cout << "Is " << e << " equal to " << f << ": " << (e == f) << std::endl;
	std::cout << "Is " << e << " different to " << f << ": " << (e != f) << std::endl;
	std::cout << "Is " << a << " different to " << b << ": " << (a != b) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Testing arithmetic operators------" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << g << " + " << d << " = " << g + d << std::endl;
	std::cout << f << " + " << c << " = " << f + c << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << g << " - " << d << " = " << g - d << std::endl;
	std::cout << f << " - " << c << " = " << f - c << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << g << " * " << d << " = " << g * d << std::endl;
	std::cout << f << " * " << c << " = " << f * c << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << g << " / " << d << " = " << g / d << std::endl;
	std::cout << f << " / " << c << " = " << f / c << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Testing pre-fix increment and decrement------" << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "++d: " << ++d << std::endl;
	std::cout << "d: " << d << std::endl;
	//std::cout << "a: " << a << std::endl;
	//std::cout << "++a: " << ++a << std::endl;
	//std::cout << "a: " << a << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "--g: " << --g << std::endl;
	std::cout << "g: " << g << std::endl;
	//std::cout << "e: " << e << std::endl;
	//std::cout << "--e: " << --e << std::endl;
	//std::cout << "e: " << e << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Testing post-fix increment and decrement------" << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "d++: " << d++ << std::endl;
	std::cout << "d: " << d << std::endl;
	//std::cout << "a: " << a << std::endl;
	//std::cout << "a++: " << a++ << std::endl;
	//std::cout << "a: " << a << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "g--: " << g-- << std::endl;
	std::cout << "g: " << g << std::endl;
	//std::cout << "e: " << e << std::endl;
	//std::cout << "e--: " << e-- << std::endl;
	//std::cout << "e: " << e << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Testing Fixed::min() and Fixed::max()------" << std::endl;
	std::cout << "The minimum between " << d << " and " << a << " is " << Fixed::min((const Fixed)d, (const Fixed)a) << std::endl;
	std::cout << "The minimum between " << e << " and " << f << " is " << Fixed::min(e, f) << std::endl;
	std::cout << "The minimum between " << f << " and " << b << " is " << Fixed::min(f, b) << std::endl;
	std::cout << "The maximum between " << d << " and " << a << " is " << Fixed::max(d, a) << std::endl;
	std::cout << "The maximum between " << e << " and " << f << " is " << Fixed::max((const Fixed)e, (const Fixed)f) << std::endl;
	std::cout << "The maximum between " << f << " and " << b << " is " << Fixed::max(f, b) << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "-----Subject Tests------" << std::endl;
	Fixed z;
	Fixed const y( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << z << std::endl;
	std::cout << ++z << std::endl;
	std::cout << z << std::endl;
	std::cout << z++ << std::endl;
	std::cout << z << std::endl;
	std::cout << y << std::endl;
	std::cout << Fixed::max( z, y ) << std::endl;
	return (0);
}

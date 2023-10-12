/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:52:37 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/13 01:38:32 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	fiabs(Fixed nb){

	if (nb < 0)
		return (nb * (-1));
	return (nb);
}

Fixed	areaTriangle( Point const a, Point const b, Point const c ){
	
	return ((a.getX() * (b.getY() - c.getY())\
			+ b.getX() * (c.getY() - a.getY())\
			+ c.getX() * (a.getY() - b.getY())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed	tAbc = fiabs(areaTriangle(a, b, c));
	Fixed	tPab = fiabs(areaTriangle(point, a, b));
	Fixed	tPbc = fiabs(areaTriangle(point, b, c));
	Fixed	tPac = fiabs(areaTriangle(point, a, c));

	/* std::cout << tAbc << std::endl;
	std::cout << tPab << std::endl;
	std::cout << tPbc << std::endl;
	std::cout << tPac << std::endl;
 */
	if (tAbc == tPab + tPbc + tPac)
		return (true);
	return (false);
}

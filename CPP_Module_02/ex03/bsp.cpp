/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:52:37 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/13 13:29:40 by fbosch           ###   ########.fr       */
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

	Fixed tAbc = fiabs(areaTriangle(a, b, c));
    Fixed tPab = fiabs(areaTriangle(point, a, b));
    Fixed tPbc = fiabs(areaTriangle(point, b, c));
    Fixed tPac = fiabs(areaTriangle(point, a, c));

    const Fixed tolerance(0.0001f);

    // Check if the point is on the edge of the triangle (within tolerance of the area)
    if (fiabs(tPab) <= tolerance || fiabs(tPbc) <= tolerance || fiabs(tPac) <= tolerance)
        return (false);

    // Check if the areas sum up to the area of the triangle
    if (fiabs(tAbc - (tPab + tPbc + tPac)) <= tolerance)
        return (true);
		
    return (false);
}

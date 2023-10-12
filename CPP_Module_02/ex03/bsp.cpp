/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:52:37 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 20:17:52 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	getAreaTriangle( Point const a, Point const b, Point const c ){
	
	return ((c.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed	area_triangle = getAreaTriangle(a, b, c);
	Fixed	area1 = getAreaTriangle(point, a, b);
	Fixed	area2 = getAreaTriangle(point, b, c);
	Fixed	area3 = getAreaTriangle(point, a, c);

	if (area_triangle == area1 + area2 + area3)
		return (true);
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 20:28:42 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void){
	
	Point	vertex1( 0, 0);
	Point	vertex2( 10, 0);
	Point	vertex3( 5, 5);
	Point point[5] = { Point(5, 2), Point(5, 4), Point(5, 6), Point(5, 8), Point(5, 3232) };

	std::cout << "Vertex 1 is in position: " << vertex1.getX() << ", " << vertex1.getY() << std::endl;
	std::cout << "Vertex 2 is in position: " << vertex2.getX() << ", " << vertex2.getY() << std::endl;
	std::cout << "Vertex 3 is in position: " << vertex3.getX() << ", " << vertex3.getY() << std::endl << std::endl;

	for (int i = 0; i < 5; i++)
	{
		if (bsp(vertex1, vertex2, vertex3, point[i]) == true)
			std::cout << "Point (" << point[i].getX() << "," << point[i].getY() << ") is inside the triangle." << std::endl;
		else
			std::cout << "Point (" << point[i].getX() << "," << point[i].getY() << ") is outside the triangle." << std::endl;
	}
	return (0);
}

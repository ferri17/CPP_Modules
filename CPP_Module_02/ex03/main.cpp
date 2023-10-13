/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/13 14:09:56 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

int	main(void){
	
	Point	vertex1( 0, 0);
	Point	vertex2( 0, 5);
	Point	vertex3( 5, 0);
	Point point[] = { Point(4, 0), Point(1.5, 1), Point(4, 0.9), Point(2.28, 2.74), Point(-0.22, 4.66), Point(0, 0), Point(0, 5), Point(5, 0) };

	std::cout << "Vertex 1 is in position: " << vertex1.getX() << ", " << vertex1.getY() << std::endl;
	std::cout << "Vertex 2 is in position: " << vertex2.getX() << ", " << vertex2.getY() << std::endl;
	std::cout << "Vertex 3 is in position: " << vertex3.getX() << ", " << vertex3.getY() << std::endl << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (bsp(vertex1, vertex2, vertex3, point[i]) == true)
			std::cout << GREEN "(" << point[i].getX() << "," << point[i].getY() << ") is inside." RESET << std::endl;
		else
			std::cout << RED "(" << point[i].getX() << "," << point[i].getY() << ") is outside." RESET << std::endl;
	}

	std::cout << std::endl << std::endl;

	Point	vertex4( -2, 3);
	Point	vertex5( 1.5, 4);
	Point	vertex6( 0, -1.5);
	Point point2[] = { Point(-2.04, 0.29), Point(-1.25, 2.53), Point(0, -0.92), Point(0.67, 1.22), Point(0.94, 3.29), Point(-2, 3), Point(1.5, 4), Point(0, -1.5) };

	std::cout << "Vertex 1 is in position: " << vertex4.getX() << ", " << vertex4.getY() << std::endl;
	std::cout << "Vertex 2 is in position: " << vertex5.getX() << ", " << vertex5.getY() << std::endl;
	std::cout << "Vertex 3 is in position: " << vertex6.getX() << ", " << vertex6.getY() << std::endl << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (bsp(vertex4, vertex5, vertex6, point2[i]) == true)
			std::cout << GREEN "(" << point2[i].getX() << "," << point2[i].getY() << ") is inside." RESET << std::endl;
		else
			std::cout << RED "(" << point2[i].getX() << "," << point2[i].getY() << ") is outside." RESET << std::endl;
	}

	Point	vertex7( 0, 0);
	Point	vertex8( 100, 0);
	Point	vertex9( 50, 100);
	Point point3[] = { Point(10, 5), Point(100, 20), Point(50, 70), Point(83, 2), Point(20, 98), Point(0, 0), Point(0, 100), Point(50, 100) };

	std::cout << "Vertex 1 is in position: " << vertex7.getX() << ", " << vertex7.getY() << std::endl;
	std::cout << "Vertex 2 is in position: " << vertex8.getX() << ", " << vertex8.getY() << std::endl;
	std::cout << "Vertex 3 is in position: " << vertex9.getX() << ", " << vertex9.getY() << std::endl << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (bsp(vertex7, vertex8, vertex9, point3[i]) == true)
			std::cout << GREEN "(" << point3[i].getX() << "," << point3[i].getY() << ") is inside." RESET << std::endl;
		else
			std::cout << RED "(" << point3[i].getX() << "," << point3[i].getY() << ") is outside." RESET << std::endl;
	}
	return (0);
}

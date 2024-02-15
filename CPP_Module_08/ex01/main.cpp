/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/15 17:46:03 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX_SIZE 30000

int	main(void)
{
	std::list<int>	list;

	for (unsigned int i = 0; i < MAX_SIZE; i++)
		list.push_back(i);

	Span	s(MAX_SIZE);
	s.addNumber(list.begin(), list.end());
	s.printSpan();
	std::cout << "Shortest span = " << s.shortestSpan() << std::endl;
	std::cout << "Longest span = " << s.longestSpan() << std::endl;

	std::cout << std::endl << std::endl;
	
	Span	s2(5);
	
	try
	{
		s2.addNumber(25665);
		s2.addNumber(-2000);
		s2.addNumber(897329732);
		s2.addNumber(0);
		s2.addNumber(-3);
		s2.addNumber(41);
		s2.addNumber(7);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	s2.printSpan();
	std::cout << "Shortest span = " << s2.shortestSpan() << std::endl;
	std::cout << "Longest span = " << s2.longestSpan() << std::endl;
	return (0);
}

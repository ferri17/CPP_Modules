/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/02 19:04:18 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat  ferran("Ferran", 149);
		Bureaucrat  yole;
		Bureaucrat	durum("Durum", 3);
		
		std::cout << ferran << std::endl;
		ferran.decrementGrade();
		std::cout << ferran << std::endl;
		
		/* Bureaucrat	test("test", 151);
		std::cout << test << std::endl; */

		std::cout << yole << std::endl;
		std::cout << durum << std::endl;
		yole = durum;
		durum.incrementGrade();
		std::cout << yole << std::endl;
		std::cout << durum << std::endl;

		durum.incrementGrade();
		std::cout << durum << std::endl;
		durum.incrementGrade();
		std::cout << durum << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}

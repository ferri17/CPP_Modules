/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/02 00:54:21 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	ferran("Ferran", 140);
		Bureaucrat	boss("Boss", 1);
		Form		basicForm("Basic stuff", 140, 150);
		Form		basicForm2(basicForm);
		Form		advancedForm("Advanced stuff", 10, 1);
		
		std::cout << ferran << std::endl;
		std::cout << boss << std::endl;
		std::cout << basicForm << std::endl;
		std::cout << basicForm2 << std::endl;
		std::cout << advancedForm << std::endl;
		
		ferran.signForm(basicForm);
		boss.signForm(basicForm2);
		ferran.signForm(advancedForm);

		boss.signForm(advancedForm);
		std::cout << basicForm << std::endl;
		std::cout << basicForm2 << std::endl;
		std::cout << advancedForm << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}

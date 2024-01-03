/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/03 12:41:17 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	ferran("Ferran", 145);
	Bureaucrat	boss("Boss", 1);
	Intern		becari;
	Intern		becari2;
	AForm		*form = NULL;
	AForm		*form2 = NULL;

	try
	{
		form = becari.makeForm("pardon", "Bender");
		becari2 = becari;
		form2 = becari2.makeForm("robotomy", "Pami");

		std::cout << ferran << std::endl;
		std::cout << boss << std::endl;
		std::cout << *form << std::endl;

		ferran.signForm(*form);
		ferran.executeForm(*form);

		std::cout << *form << std::endl;

		boss.signForm(*form);
		boss.executeForm(*form);

		ferran.signForm(*form2);
		boss.signForm(*form2);
		boss.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete form;
	delete form2;
	return (0);
}

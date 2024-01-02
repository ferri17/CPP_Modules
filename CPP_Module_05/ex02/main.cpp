/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/03 00:12:48 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	Bureaucrat	ferran("Ferran", 145);
	Bureaucrat	boss("Boss", 1);
	AForm		*shrubberyForm = new ShrubberyCreationForm("Joselito");
	AForm		*robotomyForm = new RobotomyRequestForm("Pandu");
	AForm		*pardonForm = new PresidentialPardonForm("Hannibal");

	try
	{
		std::cout << ferran << std::endl;
		std::cout << boss << std::endl;
		std::cout << *shrubberyForm << std::endl;
		std::cout << *robotomyForm << std::endl;
		std::cout << *pardonForm << std::endl;

		ferran.signForm(*shrubberyForm);
		ferran.executeForm(*shrubberyForm);

		std::cout << *shrubberyForm << std::endl;

		boss.executeForm(*shrubberyForm);

		std::cout << *robotomyForm << std::endl;
		ferran.signForm(*robotomyForm);
		boss.signForm(*robotomyForm);
		boss.executeForm(*robotomyForm);

		ferran.signForm(*pardonForm);
		ferran.executeForm(*pardonForm);
		boss.executeForm(*pardonForm);
		boss.signForm(*pardonForm);
		boss.executeForm(*pardonForm);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	delete shrubberyForm;
	delete robotomyForm;
	delete pardonForm;
	return (0);
}

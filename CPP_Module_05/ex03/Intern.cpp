/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:13:02 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/03 12:37:39 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Intern::Intern(void)
{
	//std::cout << "Intern Default constructor called." << std::endl;
}

Intern::Intern(const Intern &other)
{
	//std::cout << "Intern Copy constructor called." << std::endl;
	*this = other;
}

Intern &	Intern::operator=(const Intern &other)
{
	//std::cout << "Intern Copy assignment operator called." << std::endl;
	(void)other;
	return (*this);
}

Intern::~Intern( void )
{
	//std::cout << "Intern Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

AForm *	Intern::createShrubberyForm(const std::string & target) const
{
	return (new ShrubberyCreationForm(target));
}
AForm *	Intern::createRobotomyForm(const std::string & target) const
{
	return (new RobotomyRequestForm(target));
}
AForm *	Intern::createPardonForm(const std::string & target) const
{
	return (new PresidentialPardonForm(target));
}

AForm *	Intern::makeForm(const std::string & name, const std::string & target) const
{
	AForm *	newForm = NULL;
	const 	std::string	form[3] = {"shrubbery", "robotomy", "pardon"};
	AForm *	(Intern::*createForm[3])(const std::string &) const = 
	{
		&Intern::createShrubberyForm,
		&Intern::createRobotomyForm,
		&Intern::createPardonForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == form[i])
		{
			newForm = (this->*createForm[i])(target);
			std::cout << "Intern creates " << newForm->getName() << std::endl;
			return newForm;
		}
	}
	std::cout << "Intern couldn't find " << name << " form" << std::endl;
	throw Intern::FormNotFound();
	return (NULL);
}
/*---------------------- OPERATORS -----------------------*/

/*---------------------- EXCEPTIONS ----------------------*/

const char *	Intern::FormNotFound::what(void) const throw()
{
	return ("Intern couldn't find form");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/12/31 18:04:59 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("ShrubberyCreationForm", 145, 137),  _target("Default target")
{
	//std::cout << "ShrubberyCreationForm Default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & _target)
: AForm("ShrubberyCreationForm", 145, 137),  _target(_target)
{
	//std::cout << "ShrubberyCreationForm Target constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	//std::cout << "ShrubberyCreationForm Copy constructor called." << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	//std::cout << "ShrubberyCreationForm Copy assignment operator called." << std::endl;
	AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	//std::cout << "ShrubberyCreationForm Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	ShrubberyCreationForm::executeForm(void) const
{
	std::ofstream	file;
	const std::string	name = this->_target + "_shrubbery";
	const char	*filename = name.c_str();

	file.open(filename);
	if (file.fail() == true)
	{
		std::cerr << "Error opening file." << std::endl;
	}
	else
	{
		file << "          &&& &&  & &&\n"
             "      && &\\/&&\\|& ()|/ @, &&\n"
             "      &\\/(/&/&||/& /_/)_&/_&\n"
             "   &() &\\/&|()|/&\\/ '%' & ()\n"
             "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
             "&&   && & &| &| /& & % ()& /&&\n"
             " ()&_---()&\\&\\|&&-&&--%---()~\n"
             "     &&     \\|||\n"
             "             |||\n"
             "             |||\n"
             "             |||\n"
             "       , -=-~  .-^- _\"" << std::endl;
		file.close();
	}
}

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

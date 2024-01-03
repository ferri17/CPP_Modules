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

#include "PresidentialPardonForm.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
PresidentialPardonForm::PresidentialPardonForm(void) :
AForm("PresidentialPardonForm", 25, 5),  _target("Default target")
{
	//std::cout << "PresidentialPardonForm Default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & _target)
: AForm("PresidentialPardonForm", 25, 5),  _target(_target)
{
	//std::cout << "PresidentialPardonForm Target constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), _target(other._target)
{
	//std::cout << "PresidentialPardonForm Copy constructor called." << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	//std::cout << "PresidentialPardonForm Copy assignment operator called." << std::endl;
	AForm::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	//std::cout << "PresidentialPardonForm Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	PresidentialPardonForm::executeForm(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

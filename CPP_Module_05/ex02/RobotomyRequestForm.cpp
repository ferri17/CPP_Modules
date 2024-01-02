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

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
RobotomyRequestForm::RobotomyRequestForm(void) :
AForm("RobotomyRequestForm", 72, 45),  _target("Default target")
{
	//std::cout << "RobotomyRequestForm Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & _target)
: AForm("RobotomyRequestForm", 72, 45),  _target(_target)
{
	//std::cout << "RobotomyRequestForm Target constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
	//std::cout << "RobotomyRequestForm Copy constructor called." << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	//std::cout << "RobotomyRequestForm Copy assignment operator called." << std::endl;
	AForm::operator=(other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	//std::cout << "RobotomyRequestForm Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/
void	RobotomyRequestForm::executeForm(void) const
{
	std::srand(std::time(nullptr));

	std::cout << "xzxzyx...... ";
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has been succesfully robotomized" << std::endl;
	else
		std::cout << "Robotomy on " << this->_target << " failed" << std::endl;
}

/*---------------------- OPERATORS -----------------------*/

/*--------------------- EXCEPTIONS ----------------------*/

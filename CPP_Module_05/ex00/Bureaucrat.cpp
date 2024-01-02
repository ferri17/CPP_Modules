/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/12/31 18:04:59 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << "Name constructor called." << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	std::cout << "Copy constructor called." << std::endl;
	*this = other;
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1; 
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1; 
}

/*---------------------- OPERATORS -----------------------*/

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bur)
{	
	return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".");
}

/*--------------------- EXCEPTIONS ----------------------*/

const char *	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

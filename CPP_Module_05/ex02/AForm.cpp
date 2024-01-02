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

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/* ------------------- ORTHODOX CANONICAL CLASS FORM ------------------*/
Form::Form(void) : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{
	std::cout << "Form Default constructor called." << std::endl;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExecute)
: _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	std::cout << "Name constructor called." << std::endl;
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &other) : _name(other.getName()), _isSigned(other.getSignedStatus()),
_gradeSign(other.getGradeSign()), _gradeExecute(other.getGradeExecute())
{
	std::cout << "Copy constructor called." << std::endl;
}

Form &	Form::operator=(const Form &other)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_isSigned = other.getSignedStatus();
	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

std::string		Form::getName(void) const
{
	return (this->_name);
}
bool			Form::getSignedStatus(void) const
{
	return (this->_isSigned);
}
unsigned int	Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}
unsigned int	Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(const Bureaucrat & bur)
{
	if (bur.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

/*---------------------- OPERATORS -----------------------*/

std::ostream	&operator<<(std::ostream &out, const Form &form)
{	
	return (out << "-----------------" << std::endl
			<< "Form name: " << form.getName() << std::endl
			<< "Status: " << (form.getSignedStatus() ? "Signed" : "Not signed") << std::endl
			<< "Grade required to sign: " << form.getGradeSign() << std::endl
			<< "Grade required to exectue: " << form.getGradeExecute() << std::endl
			<< "-----------------");
}

/*--------------------- EXCEPTIONS ----------------------*/

const char *	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

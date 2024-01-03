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
AForm::AForm(void) : _name("Default"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{
	//std::cout << "AForm Default constructor called." << std::endl;
}

AForm::AForm(std::string name, unsigned int gradeSign, unsigned int gradeExecute)
: _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	//std::cout << "AForm Name constructor called." << std::endl;
	if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &other) : _name(other.getName()), _isSigned(other.getSignedStatus()),
_gradeSign(other.getGradeSign()), _gradeExecute(other.getGradeExecute())
{
	//std::cout << "AForm Copy constructor called." << std::endl;
}

AForm &	AForm::operator=(const AForm &other)
{
	//std::cout << "AForm Copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->_isSigned = other.getSignedStatus();
	}
	return (*this);
}

AForm::~AForm(void)
{
	//std::cout << "AForm Destructor called." << std::endl;
}

/* ------------------- MEMBER FUNCTIONS ------------------*/

std::string		AForm::getName(void) const
{
	return (this->_name);
}
bool			AForm::getSignedStatus(void) const
{
	return (this->_isSigned);
}
unsigned int	AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}
unsigned int	AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void	AForm::beSigned(const Bureaucrat & bur)
{
	if (bur.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

void	AForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSignedStatus() == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
	this->executeForm();
}

/*---------------------- OPERATORS -----------------------*/

std::ostream	&operator<<(std::ostream &out, const AForm &form)
{	
	return (out << "-----------------" << std::endl
			<< "Form name: " << form.getName() << std::endl
			<< "Status: " << (form.getSignedStatus() ? "Signed" : "Not signed") << std::endl
			<< "Grade required to sign: " << form.getGradeSign() << std::endl
			<< "Grade required to exectue: " << form.getGradeExecute() << std::endl
			<< "-----------------");
}

/*--------------------- EXCEPTIONS ----------------------*/

const char *	AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high, range [1 - 150].");
}

const char *	AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low, range [1 - 150].");
}

const char *	AForm::FormNotSigned::what(void) const throw()
{
	return ("Form not signed, can't be executed.");
}

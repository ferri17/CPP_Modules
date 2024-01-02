/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/12/31 18:04:47 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class	Bureaucrat;

class	AForm
{
	protected:
		const std::string	_name;
		bool				_isSigned;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExecute;
	public:
		AForm( void );
		AForm( std::string name, unsigned int gradeSign, unsigned int gradeExecute );
		AForm( const AForm &other );
		AForm &	operator=( const AForm &other );
		virtual ~AForm( void );

		std::string		getName( void ) const;
		bool			getSignedStatus( void ) const;
		unsigned int	getGradeSign( void ) const;
		unsigned int	getGradeExecute( void ) const;

		void			beSigned( const Bureaucrat & bur);
		void			execute( Bureaucrat const & executor ) const;
		virtual void	executeForm( void ) const = 0;
		
		class	GradeTooHighException : public std::exception
		{
			public:
				const char *	what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *	what() const throw();
		};
		class	FormNotSigned : public std::exception
		{
			public:
				const char *	what() const throw();
		};
};

std::ostream &		operator<<(std::ostream &out, const AForm &bur);

#endif

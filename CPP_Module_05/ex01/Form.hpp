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

class	Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const unsigned int	_gradeSign;
		const unsigned int	_gradeExecute;
	public:
		Form( void );
		Form( std::string name, unsigned int gradeSign, unsigned int gradeExecute );
		Form( const Form &other );
		Form &	operator=( const Form &other );
		~Form( void );

		std::string		getName( void ) const;
		bool			getSignedStatus( void ) const;
		unsigned int	getGradeSign( void ) const;
		unsigned int	getGradeExecute( void ) const;

		void			beSigned( const Bureaucrat & bur);
		
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
};

std::ostream &		operator<<(std::ostream &out, const Form &bur);

#endif

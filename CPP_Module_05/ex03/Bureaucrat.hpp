/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/02 19:01:41 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	AForm;

class	Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, unsigned int grade);
		Bureaucrat( const Bureaucrat &other );
		Bureaucrat &	operator=( const Bureaucrat &other );
		~Bureaucrat( void );

		std::string		getName( void ) const;
		unsigned int	getGrade( void ) const;
		
		void		incrementGrade( void );
		void		decrementGrade( void );
		void		signForm( AForm &form ) const;
		void		executeForm(AForm const & form) const;

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

std::ostream &		operator<<(std::ostream &out, const Bureaucrat &bur);

#endif

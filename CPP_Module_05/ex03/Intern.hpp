/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 00:17:49 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/03 12:32:49 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class	AForm;

class	Intern
{
	public:
		Intern( void );
		Intern( const Intern &other );
		Intern &	operator=( const Intern &other );
		~Intern( void );

		AForm *	createShrubberyForm(const std::string & target) const;
		AForm *	createRobotomyForm(const std::string & target) const;
		AForm *	createPardonForm(const std::string & target) const;
		AForm *	makeForm(const std::string & name, const std::string & target) const;

		class	FormNotFound : public std::exception
		{
			public:
				const char *	what() const throw();
		};
};

#endif

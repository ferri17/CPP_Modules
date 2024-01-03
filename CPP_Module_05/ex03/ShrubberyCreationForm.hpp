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

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string & target );
		ShrubberyCreationForm( const ShrubberyCreationForm &other );
		ShrubberyCreationForm &	operator=( const ShrubberyCreationForm &other );
		~ShrubberyCreationForm( void );

		void	executeForm( void ) const;
};

#endif

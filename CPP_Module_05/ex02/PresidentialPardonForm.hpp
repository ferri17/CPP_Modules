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

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class	PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string & target );
		PresidentialPardonForm( const PresidentialPardonForm &other );
		PresidentialPardonForm &	operator=( const PresidentialPardonForm &other );
		~PresidentialPardonForm( void );

		void	executeForm( void ) const;
};

#endif

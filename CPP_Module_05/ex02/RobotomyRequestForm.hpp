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

#ifndef ROBOTOMYREQUEST_HPP
# define ROBOTOMYREQUEST_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string & target );
		RobotomyRequestForm( const RobotomyRequestForm &other );
		RobotomyRequestForm &	operator=( const RobotomyRequestForm &other );
		~RobotomyRequestForm( void );

		void	executeForm( void ) const;
};

#endif

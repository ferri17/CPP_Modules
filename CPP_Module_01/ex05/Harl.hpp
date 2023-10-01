/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:09:28 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/02 00:02:23 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl{

	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
};

typedef void	(Harl::*t_func) ( void );

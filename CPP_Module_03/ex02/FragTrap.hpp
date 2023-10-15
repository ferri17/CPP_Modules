/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:39:20 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/16 00:41:53 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public	ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap & other );
		FragTrap &	operator=( const FragTrap & other );
		~FragTrap();

		void	highFivesGuys( void );
	
};

#endif

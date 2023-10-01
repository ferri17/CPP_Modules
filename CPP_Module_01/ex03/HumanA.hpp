/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:59:39 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 23:46:05 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanA{

	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA( std::string	name, Weapon &weapon );
		~HumanA();
		
		void	attack( void );

};

#endif

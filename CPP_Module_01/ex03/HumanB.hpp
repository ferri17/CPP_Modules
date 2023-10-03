/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:59:39 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/03 22:29:13 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanB{

	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB( std::string	name );
		~HumanB();
		
		void	attack( void );
		void	setWeapon( Weapon &newWeapon );

};

#endif

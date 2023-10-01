/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 00:02:58 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/01 00:30:33 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name){

	_weapon = NULL;
}

HumanB::~HumanB(){

	return ;
}

void	HumanB::setWeapon( Weapon &newWeapon ){

	_weapon = &newWeapon;
}


void	HumanB::attack( void ){
	
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is unarmed." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:34:35 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/01 00:00:42 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(){

	return ;
}

void	HumanA::attack( void ){
	
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
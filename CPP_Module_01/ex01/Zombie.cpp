/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:17:19 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 01:10:09 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ){

	return ;
}

Zombie::Zombie( std::string name ){
	
	this->setName(name);
}

Zombie::~Zombie( void ){

	std::cout << Zombie::getName() << ": My time has come to an end..." << std::endl;
}

void	Zombie::announce( void ){
	
	std::cout << Zombie::getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName( std::string name ){

	_name = name;
}

std::string	Zombie::getName( void ){
	
	return(_name);
}

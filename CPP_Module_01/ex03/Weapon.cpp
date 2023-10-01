/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:36:08 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 23:36:10 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){

	return ;
}

Weapon::Weapon( std::string type ){

	setType(type);
	return ;
}

Weapon::~Weapon(){

	return ;
}

const std::string&	Weapon::getType( void ){

	const std::string&	type = _type;
	return (type);
}

void	Weapon::setType( std::string type ){

	this->_type = type;
}

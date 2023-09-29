/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 01:15:35 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name ){

	Zombie	*newZombie = new Zombie();

	newZombie->setName(name);
	return (newZombie);
}

void	randomChump( std::string name ){
	
	Zombie	newZombie;

	newZombie.setName(name);
	newZombie.announce();
}

int	main(void){
	
	Zombie	rafael("Rafael");
	Zombie *juanito = newZombie("Juanito");

	randomChump("Mailucena");
	rafael.announce();
	juanito->announce();
	delete juanito;
	return (0);
}
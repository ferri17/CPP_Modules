/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 14:02:47 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define HORDE_SIZE 5

int	main(void){
	
	Zombie	*myHorde;

	myHorde = zombieHorde(HORDE_SIZE, "Rafaelsito");
	for (int i = 0; i < HORDE_SIZE; i++){
		myHorde[i].announce();
	}
	delete[] myHorde;
	return (0);
}

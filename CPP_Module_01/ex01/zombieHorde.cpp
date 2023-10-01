/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:34:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 13:48:46 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){

	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return (horde);
}
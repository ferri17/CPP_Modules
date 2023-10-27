/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:33:14 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 19:36:18 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {

	AMateria * iceSpell = new Ice();
	AMateria * cureSpell = new Cure();
	ICharacter *	characters[] = {
		
		new Character("Ferran"),
		new Character("Bilm"),
		new Character("Drum")
	};
	for (int i = 0; i < 3; i++)
		std::cout << characters[i]->getName() << " is alive!" << std::endl;
	characters[0]->printHUD();
	characters[0]->equip(NULL);
	characters[0]->printHUD();
	characters[0]->equip(iceSpell);
	characters[0]->equip(cureSpell);
	characters[0]->equip(iceSpell);
	characters[0]->equip(iceSpell);
	characters[0]->equip(iceSpell);
	characters[0]->equip(cureSpell);
	characters[0]->use(0, *(characters[2]));
	characters[0]->printHUD();
	//characters[0]->unequip(3);
	//characters[0]->unequip(1);
	characters[0]->printHUD();
	characters[0]->equip(iceSpell);
	characters[0]->equip(cureSpell);
	characters[0]->printHUD();
	for (int i = 0; i < 3; i++)
		delete characters[i];
	return (0);
}

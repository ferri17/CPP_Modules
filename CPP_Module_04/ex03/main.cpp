/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:33:14 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/29 02:53:58 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	subjectTest(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Subject test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	extraTests(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Extra test" << std::endl;
	std::cout << "===========================================" << std::endl;

	IMateriaSource *	src = new MateriaSource();
	ICharacter *		mopo = new Character("Mopo");
	AMateria *			tmp;

	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	mopo->equip(tmp);
	mopo->equip(src->createMateria("icea"));
	mopo->printHUD();

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);

	tmp = src->createMateria("ice");
	mopo->equip(tmp);

	tmp = src->createMateria("cure");
	mopo->equip(tmp);
	delete tmp;
	tmp = mopo->getMateria(0);
	mopo->unequip(0);
	delete tmp;
	mopo->printHUD();

	Character *	ziski = new Character("Ziski");
	Character	ovi("Ovi");
	
	tmp = src->createMateria("cure");
	ziski->equip(tmp);
	tmp = src->createMateria("ice");
	ziski->equip(tmp);

	ziski->printHUD();
	ovi.printHUD();

	std::cout << "+++++++ Copy ovi = ziski +++++++" << std::endl;
	ovi = *ziski;
	ziski->printHUD();
	ovi.printHUD();

	std::cout << "+++++++ Testing deep copy of Character +++++++" << std::endl;
	tmp = ovi.getMateria(2);
	tmp = ovi.getMateria(1);
	ovi.unequip(1);
	delete tmp;
	ziski->printHUD();
	ovi.printHUD();

	std::cout << "+++++++ Testing interactions +++++++" << std::endl;
	mopo->use(0, *ziski);
	mopo->use(-1, *ziski);
	mopo->use(1, *ziski);
	mopo->use(2, *ziski);
	mopo->use(3, *ziski);
	mopo->use(4, *ziski);
	ovi.use(0, *mopo);
	ziski->use(1, ovi);

	delete src;
	delete mopo;
	delete ziski;
}

int	main(void) {

	subjectTest();
	extraTests();
	return (0);
}

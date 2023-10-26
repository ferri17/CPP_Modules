/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 22:21:56 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	testBasicAnimalArray(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Basic animal array test" << std::endl;
	std::cout << "===========================================" << std::endl;
	
	AAnimal *	spiri = new Cat();
	AAnimal * zoo[] =
	{
		new Cat(),
		new Dog(),
		new Dog(),
		new Cat()
	};
	
	for (int i = 0; i < 4; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete zoo[i];
	delete spiri;
}

void	testAssignation(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Test assignment operator" << std::endl;
	std::cout << "===========================================" << std::endl;
	
	Dog		plat;
	Dog *	mars = new Dog(plat);

	std::cout << plat.getType() << std::endl;
	plat.makeSound();
	std::cout << mars->getType() << std::endl;
	mars->makeSound();
	delete mars;
}

void	testPointer(void) {

	std::cout << "===========================================" << std::endl;
	std::cout << "Test pointer and self assignation" << std::endl;
	std::cout << "===========================================" << std::endl;

	Cat	og;
	Cat *	og2 = &og;
	const	AAnimal *cpy = new Cat(og);
	
	std::cout << og.getType() << std::endl;
	std::cout << cpy->getType() << std::endl;
	og = *og2;
	delete cpy;
}

int	main(void) {
	
	testBasicAnimalArray();
	testAssignation();
	testPointer();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/11/01 11:39:16 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	animalSoundValueCopy(Animal animal) {

	animal.makeSound();
}

void	animalSoundReferenceCopy(Animal * animal) {

	animal->makeSound();
}

int	main(void) {

	std::cout << "-> Testing animals <-" << std::endl;
	const Animal    *Animals[] =
	{
		new Animal(),
		new Dog(),
		new Cat()
	};

	for (int i = 0; i < 3; i++)
	{
		std::cout << "-----------" << std::endl; 
		std::cout << Animals[i]->getType() << std::endl;
		Animals[i]->makeSound();
		delete Animals[i];
		std::cout << "-----------" << std::endl; 
	}

	Animal *	unknown = new Dog();

	unknown->makeSound();
	animalSoundValueCopy(*unknown);
	animalSoundReferenceCopy(unknown);
	delete	unknown;

	std::cout << "\n\n-> Testing wrong animal <-" << std::endl;
	const WrongAnimal    *WrongAnimals[] =
	{
		new WrongAnimal(),
		new WrongCat()
	};
	const WrongCat *	fili = new WrongCat();

	fili->makeSound();
	delete fili;
	for (int i = 0; i < 2; i++)
	{
		std::cout << "-----------" << std::endl; 
		std::cout << WrongAnimals[i]->getType() << std::endl;
		WrongAnimals[i]->makeSound();
		delete WrongAnimals[i];
		std::cout << "-----------" << std::endl; 
	}
	return (0);
}

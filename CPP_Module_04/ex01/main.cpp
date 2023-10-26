/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 13:37:53 by fbosch           ###   ########.fr       */
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

	Animal *	spiri = new Cat();
	*spiri = *spiri;
	delete spiri;
	std::cout << "===========" << std::endl;
	Animal * zoo[] =
	{
		new Cat(),
		new Dog(),
		new Cat(),
		new Cat()
	};
	std::cout << "===========" << std::endl;
	for (int i = 0; i < 4; i++)
		delete zoo[i];
	std::cout << "===========" << std::endl;
	Dog		plat;
	Dog *	mars = new Dog(plat);

	plat.getType();
	plat.makeSound();
	mars->getType();
	mars->makeSound();
	delete mars;
	return (0);
}

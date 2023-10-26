/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 03:30:55 by fbosch           ###   ########.fr       */
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
	delete spiri;
	return (0);
}

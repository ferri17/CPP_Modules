/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/11 23:28:58 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *	generate(void)
{
	unsigned int	index;

	std::srand(std::time(NULL));
	index = std::rand() % 3;
	if (index == 0)
		return (new A ());
	else if (index == 1)
		return (new B ());
	return (new C ());
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Object of class A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Object of class B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Object of class C" << std::endl;
}

void	identify(Base& p)
{	
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Object of class A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Object of class B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Object of class C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	Base *	ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);
	return (0);
}

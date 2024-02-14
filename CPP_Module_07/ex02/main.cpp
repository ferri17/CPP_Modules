/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/14 00:58:41 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(std::time(NULL));
	const unsigned int	size = std::rand() % 100;

	const Array<int>	numbers(size);
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = std::rand();
	std::cout << "ARRAY OF SIZE " << size << "[0, " << (size - 1) << "]" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	for (unsigned int i = 0; i < 10; i++)
	{
		unsigned int index = std::rand() % 100;
		try
		{
			int tmp = numbers[index];
			std::cout << "number[" << index << "] = " << tmp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "number[" << index << "] = " << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl;
	
	Array<std::string>	words(5);

	words[0] = "Animal";
	words[1] = "Zoo";
	words[2] = "Zebra";
	words[3] = "Snake";
	words[4] = "Lion";

	Array<std::string>	words2 = words;

	words2[0] = "Car";
	words2[1] = "Speed";
	words2[2] = "Wheel";
	words2[3] = "Driver";
	words2[4] = "Chasis";

	for (int i = -1; i < static_cast<int>(words.size() + 1); i++)
	{
		try
		{
			std::string tmp = words[i];
			std::string tmp2 = words2[i];
			std::cout << "word[" << i << "] = " << tmp << " - > ";
			std::cout << "word2[" << i << "] = " << tmp2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "word[" << i << "] = " << e.what() << " - > ";
			std::cout << "word2[" << i << "] = " << e.what() << std::endl;
		}
	}
}

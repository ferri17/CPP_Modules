/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/23 02:52:42 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		std::cout << std::fixed; 
		try
		{
			clock_t	t = clock();
			std::vector<int>	unsortedVec = inputToVector(av);
			std::vector<int>	sortedVec = mergeInsertSortVector(unsortedVec);

			std::cout << "Before: ";
			printContainer(unsortedVec);
			std::cout << "After: ";
			printContainer(sortedVec);
			t = clock() - t;
			std::cout << "Time to process a range of " << unsortedVec.size() << " elements with std::vector : " << static_cast<double>(t)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
			if (isSorted<std::vector<int> >(sortedVec.begin(), sortedVec.end()) && sortedVec.size() == unsortedVec.size())
				std::cout << GREEN "Vector correctly sorted!" RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Invalid number of arguments => ./PmergeMe [number_sequence]" << std::endl;
	return (0);
}

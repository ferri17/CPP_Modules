/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:07:35 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/22 21:47:51 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isInt(const std::string value)
{
	const char	*str = value.c_str();
	char	*endptr;
	long	nb = std::strtol(str, &endptr, 10);
	
	if (endptr != str && *endptr == '\0' && nb <= std::numeric_limits<int>::max() && nb >= std::numeric_limits<int>::min())
		return (true);
	return (false);
}

std::vector<int>	inputToVector(char **av)
{
	int					nb;
	std::vector<int>	vec;

	for (unsigned int i = 0; av[i]; i++)
	{
		if (isInt(av[i]))
		{
			nb = std::atoi(av[i]);
			if (nb > 0)
			{
				for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
				{
					if (nb == *it)
						throw std::runtime_error("Duplicate integers in the sequence.");
				}
				vec.push_back(nb);
			}
			else
				throw std::runtime_error("Non positive integer in the sequence.");
		}
		else
			throw std::runtime_error("Non valid integer in the sequence.");
	}
	return (vec);
}

void	mergeInsertSortVector(char **av)
{
	clock_t	t = clock();
	std::vector<int>	unsortedVec;
	std::vector<int>	sortedVec;
	
	av++;
	unsortedVec = inputToVector(av);
	std::vector<std::pair<int, int> >	pairs;

	//create pairs
	for (std::vector<int>::iterator it = unsortedVec.begin(); it != unsortedVec.end(); it++)
	{
		if (it < unsortedVec.end() - 1)
		{
			pairs.push_back(std::make_pair(*it, *(it + 1)));
			it++;
		}
		else
			pairs.push_back(std::make_pair(-1, *it));
	}

	//print pairs
	std::cout << "Pairs: ";
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << (*it).first << ",";
		std::cout << (*it).second;
		if (it != pairs.end() - 1)
			std::cout << "    ";
	}
	std::cout << std::endl;

	//Sort pairs between themselves
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > (*it).second)
			std::swap((*it).first, (*it).second);
	}
	
	//Sort pairs set by first number
	//inser merge insertion here
	insertionSortPairs(pairs);
	
	//print pairs
	std::cout << "Pairs ordered: ";
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << (*it).first << ",";
		std::cout << (*it).second;
		if (it != pairs.end() - 1)
			std::cout << "    ";
	}
	std::cout << std::endl;

	//Empty first number to vector
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			sortedVec.push_back((*it).first);
	}

	//Binary search insertion
	unsigned int index;
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			index = binarySearch(sortedVec.begin(), sortedVec.begin(), 45);
		else

	}
	
	
	
	std::cout << "Before: ";
	printContainer(unsortedVec);
	std::cout << "After: ";
	printContainer(sortedVec);
	t = clock() - t;
	std::cout << "Time to process a range of " << unsortedVec.size() << " elements with std::vector : " << static_cast<double>(t)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

}

	/* for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ",";
		*/

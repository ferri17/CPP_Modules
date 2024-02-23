/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:07:35 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/23 13:36:21 by fbosch           ###   ########.fr       */
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

std::vector<int>	mergeInsertSortVector(std::vector<int> unsortedVec)
{
	std::vector<int>					sortedVec;
	std::vector<std::pair<int, int> >	pairs;

	if (isSorted<std::vector<int> >(unsortedVec.begin(), unsortedVec.end()))
	{
		sortedVec = unsortedVec;
		return (sortedVec);
	}

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

	//Sort pairs between themselves
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > (*it).second)
			std::swap((*it).first, (*it).second);
	}
	
	//Sort pairs set by first number
	insertionSortPairs(pairs);
	
	//Push first number of the pair to sorted vector
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			sortedVec.push_back((*it).first);
	}

	/*
		Binary search insertion, only does binary search on range (i, end] 
		since it's ordered pair Ai < Bi, Bi will never be inserted in range <= i
	*/
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			binarySearchInsertion(sortedVec, std::distance(pairs.begin(), it) + 1, sortedVec.size(), (*it).second);
		else
		{
			binarySearchInsertion(sortedVec, 0, sortedVec.size(), (*it).second);
		}
	}
	return (sortedVec);
}

std::deque<int>	mergeInsertSortDeque(std::deque<int> unsortedDeque)
{
	std::deque<int>					sortedDeque;
	std::deque<std::pair<int, int> >	pairs;

	if (isSorted<std::deque<int> >(unsortedDeque.begin(), unsortedDeque.end()))
	{
		sortedDeque = unsortedDeque;
		return (sortedDeque);
	}

	//create pairs
	for (std::deque<int>::iterator it = unsortedDeque.begin(); it != unsortedDeque.end(); it++)
	{
		if (it < unsortedDeque.end() - 1)
		{
			pairs.push_back(std::make_pair(*it, *(it + 1)));
			it++;
		}
		else
			pairs.push_back(std::make_pair(-1, *it));
	}

	//Sort pairs between themselves
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > (*it).second)
			std::swap((*it).first, (*it).second);
	}
	
	//Sort pairs set by first number
	insertionSortPairs(pairs);
	
	//Push first number of the pair to sorted deque
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			sortedDeque.push_back((*it).first);
	}

	/*
		Binary search insertion, only does binary search on range (i, end] 
		since it's ordered pair Ai < Bi, Bi will never be inserted in range <= i
	*/
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if ((*it).first > 0)
			binarySearchInsertion(sortedDeque, std::distance(pairs.begin(), it) + 1, sortedDeque.size(), (*it).second);
		else
			binarySearchInsertion(sortedDeque, 0, sortedDeque.size(), (*it).second);
	}
	return (sortedDeque);
}

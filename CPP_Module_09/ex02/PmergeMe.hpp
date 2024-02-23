/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/23 13:47:10 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <limits>
#include <algorithm>
#include <ctime>
#include <iterator>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

std::vector<int>	mergeInsertSortVector(std::vector<int>	unsortedVec);
std::deque<int>		mergeInsertSortDeque(std::deque<int> unsortedDeque);
bool				isInt(const std::string value);

template <typename T>
T	inputToContainer(char **av)
{
	int	nb;
	T	cont;

	for (unsigned int i = 0; av[i]; i++)
	{
		if (isInt(av[i]))
		{
			nb = std::atoi(av[i]);
			if (nb > 0)
			{
				for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
				{
					if (nb == *it)
						throw std::runtime_error("Duplicate integers in the sequence.");
				}
				cont.push_back(nb);
			}
			else
				throw std::runtime_error("Non positive integer in the sequence.");
		}
		else
			throw std::runtime_error("Non valid integer in the sequence.");
	}
	return (cont);
}

template <typename T>
bool	isSorted(typename T::iterator itBegin, typename T::iterator itEnd)
{
	typename T::value_type	tmp;

	if (itBegin == itEnd)
		return (true);
	tmp = *itBegin;
	++itBegin;
	for (; itBegin != itEnd; itBegin++)
	{
		if (*itBegin < tmp)
			return (false);
		tmp = *itBegin;
	}
	return (true);
}

template <typename T>
void	insertionSortPairs(T & pairs)
{
	if (pairs.begin() == pairs.end())
		return ;
	for (typename T::iterator it = pairs.begin() + 1; it != pairs.end(); it++)
	{
		typename T::iterator it_next = it;
		for (typename T::iterator it_prev = it_next - 1; it_prev >= pairs.begin() && (*it_next).first > 0; it_prev--, it_next--)
		{
			if ((*it_next).first < (*it_prev).first)
				std::swap((*it_next), (*it_prev));
		}
	}
}

template <typename T>
void	binarySearchInsertion(T & cont, int left, int right, int target)
{
	int	mid;

	if (left == right)
	{
		cont.push_back(target);
		return;
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (cont[mid] < target)
			left = mid + 1;
   		 else
      		right = mid - 1;
  	}
  	if (left < static_cast<int>(cont.size()))
		cont.insert(cont.begin() + left, target);
 	 else
		cont.push_back(target);
}



template <typename T>
void	printContainer(T & arr)
{
	for (typename T::iterator it = arr.begin(); it != arr.end(); it++)
	{
		std::cout << *it;
		if (it != arr.end() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

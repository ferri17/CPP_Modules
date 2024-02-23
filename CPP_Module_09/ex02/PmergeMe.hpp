/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/23 02:51:48 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits>
#include <algorithm>
#include <ctime>
#include <iterator>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

std::vector<int>	mergeInsertSortVector(std::vector<int>	unsortedVec);
std::vector<int>	inputToVector(char **av);

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
void	binarySearchInsertion(T & cont, unsigned int left, unsigned int right, int target)
{
	unsigned int	mid;

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
  if (left < cont.size())
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

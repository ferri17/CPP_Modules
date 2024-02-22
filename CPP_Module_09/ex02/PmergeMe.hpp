/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/22 21:47:41 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits>
#include <algorithm>
#include <ctime>

void	mergeInsertSortVector(char **av);

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
unsigned int	binarySearch(T & begin, T & end, int target)
{
	typename T it = begin;
/* // Check for empty range
  if (begin == end)
    return (0); // Insert at the beginning

  // Binary search loop
  while (left < right) {
    typename T mid = begin + (end - begin) / 2;

    // Move based on comparison
    if (*(begin + mid) < target) {
      left = mid + 1; // Move left to search for higher values
    } else {
      right = mid; // Move right to narrow down the search
    }
  }

  // Return the insertion point
  return left; */
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

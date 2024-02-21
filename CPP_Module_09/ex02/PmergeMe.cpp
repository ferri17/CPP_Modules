/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:07:35 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/21 01:02:29 by fbosch           ###   ########.fr       */
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
	std::vector<int>	numbers;

	av++;
	numbers = inputToVector(av);
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
		std::cout << *it << ",";

}

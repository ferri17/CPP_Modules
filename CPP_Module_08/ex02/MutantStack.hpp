/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/15 17:57:17 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(unsigned int size);
		MutantStack(const MutantStack & other);
		MutantStack &	operator=(const MutantStack & other);
		~MutantStack(void);

		void			addNumber(int nb);
		long int		shortestMutantStack(void);
		long int		longestMutantStack(void);
		void			printMutantStack(void);

		template<typename IT>
		void	addNumber(IT first, IT last);
};

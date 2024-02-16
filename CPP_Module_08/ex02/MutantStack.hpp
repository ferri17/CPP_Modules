/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/16 13:09:24 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack & other);
		MutantStack &	operator=(const MutantStack & other);
		~MutantStack(void);

		typedef typename	std::stack<T>::container_type container;
		typedef typename 	container::iterator iterator;
		typedef typename 	container::const_iterator const_iterator;

		iterator		begin(void);
		iterator		end(void);
		const_iterator	cbegin(void);
		const_iterator	cend(void);
};

#include "MutantStack.tpp"

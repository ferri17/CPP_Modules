/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/15 17:46:16 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <list>

class	Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_numbers;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span & other);
		Span &	operator=(const Span & other);
		~Span(void);

		void			addNumber(int nb);
		long int		shortestSpan(void);
		long int		longestSpan(void);
		void			printSpan(void);

		template<typename IT>
		void	addNumber(IT first, IT last);
};

template<typename IT>
void	Span::addNumber(IT first, IT last)
{
	for (; first != last; first++)
		this->addNumber(*first);
}

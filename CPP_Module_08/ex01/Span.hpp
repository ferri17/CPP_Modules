/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/15 01:12:00 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <numeric>

class	Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int		_size;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span & other);
		Span &	operator=(const Span & other);
		~Span(void);

		void			addNumber(int nb);
		long int		shortestSpan(void);
		long int		longestSpan(void);
};

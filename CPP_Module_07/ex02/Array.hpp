/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/14 00:58:57 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class	Array
{
	private:
		T *				_arr;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int size);
		Array(const Array & other);
		~Array(void);

		Array &	operator=(const Array & other);
		T &		operator[](const int index) const;

		unsigned int	size(void) const;
};

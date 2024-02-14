/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/12 19:55:22 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T * addr, unsigned int size, void (*func)(T &))
{
	if (addr == NULL)
		return ;
	for (unsigned int i = 0; i < size; i++)
		func(addr[i]);
}

template <typename T>
void	printArray(T & arr)
{
	std::cout << arr << std::endl;
}

template <typename T>
void	addOne(T & addr)
{
	addr++;
}

void	addOneString(std::string & str)
{
	unsigned int	strLen = str.length();

	for (unsigned int i = 0; i < strLen; i++)
		addOne(str[i]);
}


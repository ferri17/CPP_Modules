/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:36 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/13 01:29:06 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _arr(NULL), _size(0)
{

}

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_size = size;
	this->_arr = new T[this->_size]();
}

template<typename T>
Array<T>::Array(const Array<T> & other)
{
	this->_size = other._size;
	this->_arr = new T[this->_size]
	for (int i = 0; i < this->_size; i++)
		this->_arr[i] = other._arr[i];

}

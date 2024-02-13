/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:33:36 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/14 00:47:01 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _arr(NULL), _size(0) {}

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
	this->_arr = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = other._arr[i];

}

template<typename T>
Array<T> &	Array<T>::operator=(const Array & other)
{
	if (this != &other)
	{
		delete[] this->_arr;
		this->_size = other._size;
		if (this->_size != 0)
			this->_arr = new T[this->_size];
		else
			this->_arr = NULL;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = other._arr[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] this->_arr;
}

template<typename T>
T &	Array<T>::operator[](const int index) const
{
	if (this->_arr == NULL)
		throw std::logic_error("Array is NULL");
	if (index < 0 || static_cast<unsigned int>(index) >= this->_size)
		throw std::out_of_range("Array index out of bounds");
	return (this->_arr[index]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:07:35 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/15 17:46:10 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span & other)
{
	*this = other;
}

Span &	Span::operator=(const Span & other)
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_numbers = other._numbers;	
	}
	return (*this);
}
		
Span::~Span(void) {}


void	Span::addNumber(int nb)
{
	if (this->_numbers.size() >= this->_size)
		throw std::logic_error("Array is full");
	this->_numbers.push_back(nb);
}

long int	Span::shortestSpan(void)
{
	long int	shortest = std::numeric_limits<long int>::max();
	
	if (this->_numbers.size() < 2)
		throw std::logic_error("Array size too small");
	std::sort(this->_numbers.begin(), this->_numbers.end());
	for(std::vector<int>::iterator it = (this->_numbers.begin() + 1); it != this->_numbers.end(); it++)
	{
		long int	diff = (*it) - *(it - 1);
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}
long int	Span::longestSpan(void)
{
	std::vector<int>::iterator	it_max;
	std::vector<int>::iterator	it_min;

	if (this->_numbers.size() < 2)
		throw std::logic_error("Array size too small");
	it_max = std::max_element(this->_numbers.begin(), this->_numbers.end());
	it_min = std::min_element(this->_numbers.begin(), this->_numbers.end());
	return (static_cast<long int>(*it_max) - static_cast<long int>(*it_min));
}

void	Span::printSpan(void)
{
	std::cout << "Printing vector of size " << this->_size << std::endl;
	std::cout << "=============================" << std::endl;
	for(std::vector<int>::iterator it = this->_numbers.begin(); it != this->_numbers.end(); it++)
		std::cout << *it << std::endl;
}

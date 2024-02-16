/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/16 13:23:30 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<float>	s;
	
	s.push(5.43);
	s.push(4.20);
	s.push(100.14);

	for (MutantStack<float>::iterator it = s.begin(); it != s.end(); it++)
	{
		*it = *it + 1;
		std::cout << *it << std::endl;
	}
	s.pop();
	s.pop();
	std::cout << "size = " << s.size() << std::endl;
	std::cout << s.top() << std::endl;

	s.push(static_cast<float>(100000));
	s.push(9999.23);

	MutantStack<float>					k = s;
	MutantStack<float>::const_iterator	cit = k.cbegin();
	MutantStack<float>::const_iterator	cend = k.cend();
	
	for (; cit != cend; cit++)
	{
		//*cit = *cit + 1;
		std::cout << *cit << std::endl;
	}
	return (0);
}

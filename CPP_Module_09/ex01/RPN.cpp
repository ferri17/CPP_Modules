/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 23:07:35 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/20 01:19:50 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	executeOperation(char operation, std::stack<int> & rpn)
{
	int	nb1, nb2;
	
	if (rpn.size() < 2)
		throw std::runtime_error("Error: couldn't complete operation, stack empty.");
	nb1 = rpn.top();
	rpn.pop();
	nb2 = rpn.top();
	rpn.pop();
	if (operation == '+')
		rpn.push(nb2 + nb1);
	else if (operation == '-')
		rpn.push(nb2 - nb1);
	else if (operation == '*')
		rpn.push(nb2 * nb1);
	else if (operation == '/')
	{
		if (nb1 == 0)
			throw std::runtime_error("Error: division by 0.");
		rpn.push(nb2 / nb1);
	}
}

void	calculateRPN(const std::string & str)
{
	std::string			next;
	std::istringstream	iss(str);
	std::stack<int>		rpn;
	
	while (std::getline(iss, next, ' '))
	{
		if (!next.empty())
		{
			if (next.length() == 1)
			{
				if (next.at(0) == '+' || next.at(0) == '-' || next.at(0) == '*' || next.at(0) == '/')
					executeOperation(next.at(0), rpn);
				else if (std::isdigit(static_cast<unsigned char>(next.at(0))))
					rpn.push(std::atoi(next.c_str()));
				else
					throw std::runtime_error("Error: invalid operand/value.");
			}
			else
				throw std::runtime_error("Error: invalid argument of length > 1.");
		}
	}
	if (iss.bad() || !iss.eof())
		throw std::runtime_error("Error: reading argument.");
	if (rpn.size() != 1)
		throw std::runtime_error("Error: invalid argument.");
	std::cout << rpn.top() << std::endl;
}

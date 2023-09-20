/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:01:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/20 02:33:22 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	std::cout << this->firstName << " " << this->lastName << " died." << std::endl;
	return ;
}

std::string	Contact::getInput(std::string	message) const
{
	std::string	input;
	std::cout << message;
	do
	{
		std::cin >> input;
		if (input.empty())
			std::cout << std::endl << "This field cannot be empty!" << std::endl;
	}
	while (input.empty());
	std::cout << std::endl;
	return (input);
}

void	Contact::init()
{
	std::string	input;

	this->firstName = Contact::getInput(std::string("Enter your name: "));
	this->lastName = Contact::getInput(std::string("Enter your last name: "));
}
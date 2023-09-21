/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:01:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/22 01:09:00 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	std::cout << this->lastName << " died." << std::endl;
	return ;
}

std::string	Contact::getInput(std::string	message) const
{
	std::string	input;
	
	do
	{
		std::cout << message;
		std::cin >> input;
	}
	while (input.empty());
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (input);
}

void	Contact::init()
{
	std::string	input;

	this->firstName = Contact::getInput(std::string("Enter your name: "));
	this->lastName = Contact::getInput(std::string("Enter your last name: "));
	this->nickname = Contact::getInput(std::string("Enter your nickname: "));
	this->lastName = Contact::getInput(std::string("Enter your darkest secret: "));

}
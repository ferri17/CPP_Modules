/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:01:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/27 00:26:21 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->isActive = false;
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string	Contact::getInput(std::string	message) const
{
	std::string	input;
	bool		valid = false;
	
	do
	{
		std::cout << message;
		getline(std::cin, input);
		if (input.empty())
			std::cout << "Error, empty string." << std::endl;
		else
			valid = true;
	}
	while (!valid);
	return (input);
}

void	Contact::init()
{
	std::string	input;

	this->isActive = true;
	this->firstName = Contact::getInput(std::string("Enter your name: "));
	this->lastName = Contact::getInput(std::string("Enter your last name: "));
	this->nickname = Contact::getInput(std::string("Enter your nickname: "));
	this->phoneNumber = Contact::getInput(std::string("Enter your phone number: "));
	this->darkestSecret = Contact::getInput(std::string("Enter your darkest secret: "));
}

bool	Contact::getState() const
{
	return (this->isActive);
}

std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return (this->lastName);
}

std::string	Contact::getNickname() const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}
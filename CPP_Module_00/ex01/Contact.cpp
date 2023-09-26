/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:01:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/25 17:20:10 by fbosch           ###   ########.fr       */
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

	this->isActive = true;
	this->firstName = Contact::getInput(std::string("Enter your name: "));
	this->lastName = Contact::getInput(std::string("Enter your last name: "));
	this->nickname = Contact::getInput(std::string("Enter your nickname: "));
	this->phoneNumber = Contact::getInput(std::string("Enter your phone number: "));
	this->darkestSecret = Contact::getInput(std::string("Enter your darkest secret: ")); //CHECK THIS CIN OR GETLINE()!!!
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
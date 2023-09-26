/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:41:28 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/27 00:46:20 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define LIST_SIZE 8

std::string	truncate_str(std::string str, size_t max_length);

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::addContact()
{
	int			index;
	static int	i = 0;

	index = i % LIST_SIZE;
	this->contacts[index].init();
	i++;
}

void	PhoneBook::searchContact()
{
	bool	valid = false;
	int		index = 0;
	int		i;

	if (this->contacts[0].getState() == false)
	{
		std::cout << "Your phonebook is still empty, please add a contact first." << std::endl;
		return ;
	}
	i = printContacts();
	do
	{
		std::cout << "What index would you like to access? ";
		std::cin >> index;
		if (std::cin.good())
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Error, invalid input." << std::endl;
		}
	} while (!valid);
	if (index > 0 && index <= i && index <= LIST_SIZE)
	{
		index--;
		std::cout << "First name: " << this->contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Sorry, this contact doesn't exist, good luck next time!" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
//Returns the number of active contacts found
int	PhoneBook::printContacts()
{
	int	i;

	std::cout << std::endl << std::setw(10) <<  "index" << "|";
	std::cout << std::setw(10) <<  "first name" << "|";
	std::cout << std::setw(10) <<  "last name" << "|";
	std::cout << std::setw(10) <<  "nickname" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	for (i = 0; this->contacts[i].getState() == true; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate_str(this->contacts[i].getFirstName(), 10) << "|";
		std::cout << std::setw(10) << truncate_str(this->contacts[i].getLastName(), 10) << "|";
		std::cout << std::setw(10) << truncate_str(this->contacts[i].getNickname(), 10) << std::endl;
	}
	std::cout << std::endl;
	return (i);
}

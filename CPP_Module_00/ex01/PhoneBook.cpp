/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 00:41:28 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/20 02:17:53 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#define LIST_SIZE 8

PhoneBook::PhoneBook()
{
	std::cout << "----WELCOME TO PHONE BOOK!-----" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "This is what you can do:" << std::endl;
	std::cout << "ADD: Create a new contact." << std::endl;
	std::cout << "SEARCH: Display a specific contact." << std::endl;
	std::cout << "EXIT: Exit the program, all contacts will be lost!" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << std::endl;
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
	std::cout << "add contact called" << std::endl;
}

void	PhoneBook::searchContact()
{
	std::cout << "search contact called" << std::endl;
}
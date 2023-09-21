/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:01:53 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/22 00:51:22 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string	input;

	while (input != "EXIT")
	{
		std::cout << "Your command Sir:";
		getline(std::cin, input);
		if (input == "ADD")
			phone_book.addContact();
		else if (input == "SEARCH")
			phone_book.searchContact();
		else if (input != "EXIT")
			std::cout << "Please insert a valid instruction." << std::endl;
	}
	return (0);
}
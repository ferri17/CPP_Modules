/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:01:53 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/27 15:30:06 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	truncate_str(std::string str, size_t max_length)
{
	if (str.length() > max_length)
		str = str.substr(0, max_length - 1) + ".";
	return (str);
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (input != "EXIT" && input != "exit")
	{
		std::cout << "\033[1;32mEnter a command (ADD, SEARCH, EXIT):\033[0m";
		getline(std::cin, input);
		if (input == "ADD" || input == "add")
			phoneBook.addContact();
		else if (input == "SEARCH" || input == "search")
			phoneBook.searchContact();
		else if (input != "EXIT" && input != "exit")
			std::cout << "Please insert a valid instruction." << std::endl;
	}
	return (0);
}

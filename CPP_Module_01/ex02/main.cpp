/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 17:23:13 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "String is stored at -> " << &str << std::endl;
	std::cout << "Pointer is pointing at -> " << stringPTR << std::endl;
	std::cout << "Reference is pointing at -> " << &stringREF << std::endl << std::endl;

	std::cout << "Value of string is -> " << str << std::endl;
	std::cout << "Value of *stringPTR is -> " << *stringPTR << std::endl;
	std::cout << "Value of reference is -> " << stringREF << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/12 19:56:14 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define NB_ARR_SIZE 5
#define STR_ARR_SIZE 3
#define CHR_ARR_SIZE 2

int	main(void)
{
	int			nbArray[NB_ARR_SIZE] = {0, 1, 2, 3, 4};
	char		chrArray[CHR_ARR_SIZE] = {'A', 'K'};
	std::string	strArray[STR_ARR_SIZE] = {"Car", "Animal", "Ynn"};

	printArray(nbArray, NB_ARR_SIZE);
	::iter(nbArray, NB_ARR_SIZE, addOne);
	printArray(nbArray, NB_ARR_SIZE);

	std::cout << std::endl;

	printArray(chrArray, CHR_ARR_SIZE);
	::iter(chrArray, CHR_ARR_SIZE, addOne);
	printArray(chrArray, CHR_ARR_SIZE);

	std::cout << std::endl;

	printArray(strArray, STR_ARR_SIZE);
	::iter(strArray, STR_ARR_SIZE, addOneString);
	printArray(strArray, STR_ARR_SIZE);
	return 0;
}

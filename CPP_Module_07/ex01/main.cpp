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

	::iter(nbArray, NB_ARR_SIZE, printArray);
	::iter(nbArray, NB_ARR_SIZE, addOne);
	::iter(nbArray, NB_ARR_SIZE, printArray);

	std::cout << std::endl;

	::iter(chrArray, CHR_ARR_SIZE, printArray);
	::iter(chrArray, CHR_ARR_SIZE, addOne);
	::iter(chrArray, CHR_ARR_SIZE, printArray);

	std::cout << std::endl;

	::iter(strArray, STR_ARR_SIZE, printArray);
	::iter(strArray, STR_ARR_SIZE, addOneString);
	::iter(strArray, STR_ARR_SIZE, printArray);
	return 0;
}

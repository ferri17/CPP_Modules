/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:08:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/28 01:01:57 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define DEFAULT_MSSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"


int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << DEFAULT_MSSG;
	else if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
				std::cout << static_cast<char>(toupper(av[i][j]));
	}
	std::cout << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:42:22 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/02 00:20:11 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int ac, char **av ){
	
	Harl		harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
	{
		std::cerr << "Usage: ./harl [complaint]" << std::endl;
		std::cerr << "Complaints: 'debug', 'info', 'warning', 'error'" << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:13:06 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/02 00:22:25 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){}

Harl::~Harl( void ){}

void	Harl::complain( std::string level ){

	int			i = 0;
	std::string	option[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func 		func[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	for (i = 0; i < 4; i++)
	{
		if (level == option[i])
		{
			(this->*func[i])();
			break ;
		}
	}
	if (i == 4)
		std::cerr << "Complaints: 'debug', 'info', 'warning', 'error'" << std::endl;
}

void	Harl::_debug( void ){
	
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-" \
	<< "triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info( void ){

	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. " \
	<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking" \
	<< " for more!" << std::endl;
}

void	Harl::_warning( void ){

	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. " \
	<< "I've been coming for years whereas you started working here since last month." \
	<< std::endl;
}

void	Harl::_error( void ){

	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." \
	<< std::endl;
}

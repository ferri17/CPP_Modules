/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/22 01:39:35 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){

    ClapTrap    ferran("Ferran");
    ClapTrap    dran("Dran");

    for (int i = 0; i < 12; i++)
        ferran.attack("Bot 1");
    ferran.beRepaired(1000);
    for (int i = 0; i < 3; i++)
        ferran.takeDamage(6);
    dran.beRepaired(10);
    dran.takeDamage(15);
    dran.takeDamage(15);
    dran.beRepaired(10);
    return (0);

}

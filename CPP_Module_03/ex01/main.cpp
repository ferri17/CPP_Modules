/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/22 01:57:43 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
    
    ScavTrap    scav1("Scav 1");
    ScavTrap    scav2("Scav 2");
    ScavTrap    scav3;

    for (int i = 0; i < 4; i++)
        scav1.attack("Bot 1");
    scav1.beRepaired(10);
    for (int i = 0; i < 3; i++)
        scav1.takeDamage(90);
    scav2.beRepaired(10);
    scav2.takeDamage(15);
    scav2.takeDamage(15);
    scav2.beRepaired(10);

    scav3 = scav1;
    scav3.attack( "Bot 97");
    
    ClapTrap    randomo;
    randomo.attack("randomo2");
    randomo.takeDamage(10);
    randomo.beRepaired(100);
    return (0);

}

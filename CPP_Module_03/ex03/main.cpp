/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/16 00:45:05 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
    
    FragTrap    frag1("Frag 1");
    ScavTrap    scav2("Scav 2");
    ScavTrap    scav3;

    for (int i = 0; i < 4; i++)
        frag1.attack("Bot 1");
    frag1.beRepaired(10);
    frag1.highFivesGuys();
    for (int i = 0; i < 3; i++)
        frag1.takeDamage(90);
    frag1.highFivesGuys();
    scav2.beRepaired(10);
    scav2.takeDamage(15);
    scav2.takeDamage(15);
    scav2.beRepaired(10);
    return (0);

}

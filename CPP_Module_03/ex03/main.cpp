/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/22 02:26:09 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void){
    
    DiamondTrap ferran;
    DiamondTrap josefran("durum");

    ferran.attack("mich");
    ferran.whoAmI();
    josefran.whoAmI();
    for (int i = 0; i < 51; i++)
        josefran.beRepaired(100);
    ferran.takeDamage(99);
    ferran.takeDamage(0);
    ferran.takeDamage(10);
    return (0);

}

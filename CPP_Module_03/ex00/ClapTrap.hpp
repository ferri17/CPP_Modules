/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/13 20:43:07 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap{

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDmg;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		ClapTrap &	operator=( const ClapTrap &other );
		~ClapTrap( void );

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
};

#endif

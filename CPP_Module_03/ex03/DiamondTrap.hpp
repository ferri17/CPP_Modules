/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:11:48 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/22 02:22:28 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap {

	private:
		std::string	_name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string const & name );
		DiamondTrap( DiamondTrap const & other );
		DiamondTrap & operator=( DiamondTrap const & other );
		~DiamondTrap();

		void	whoAmI();

};

#endif

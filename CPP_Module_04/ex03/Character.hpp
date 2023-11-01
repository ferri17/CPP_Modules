/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/11/01 14:20:28 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define SLOTS 4

# include <iostream>
# include <iomanip>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		std::string	_name;
		AMateria *	_inventory[ SLOTS ];
	public:
		Character( void );
		Character( std::string const & name );
		Character( Character const & other );
		Character &	operator=( Character const &	other );
		~Character( void );

		std::string const &	getName() const;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter & target );

		void				printHUD( void );
		AMateria *			getMateria( int idx );
		
};

#endif

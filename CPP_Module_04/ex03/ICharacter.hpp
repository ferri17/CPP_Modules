/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 00:59:04 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter {

	public:
		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria* m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter & target ) = 0;
		virtual ~ICharacter( void ) {}
};

#endif
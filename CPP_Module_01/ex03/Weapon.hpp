/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:28:57 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/03 22:29:20 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon{

	private:
		std::string	_type;
	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon();
		const std::string&	getType( void );
		void				setType( std::string type );

};

#endif

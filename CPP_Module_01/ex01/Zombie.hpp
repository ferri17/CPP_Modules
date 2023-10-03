/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:14:20 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/03 22:30:08 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie{

	private:
		std::string	_name;
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );

		void		setName( std::string name );
		std::string	getName( void );

};

Zombie*	zombieHorde( int N, std::string name );

#endif
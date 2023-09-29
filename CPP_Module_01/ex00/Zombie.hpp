/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:14:20 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/30 01:09:30 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie{

	private:
		std::string	_name;
	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void		announce( void );
		Zombie*		newZombie( std::string name );
		void		randomChump( std::string name );

		void		setName( std::string name );
		std::string	getName( void );

};

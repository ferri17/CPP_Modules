/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/23 01:09:36 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class	Dog : public Animal {

	public:
		Dog( void );
		Dog( Dog const & other );
		Dog &	operator=( Dog const & other );
		~Dog( void );

		void	makeSound( void ) const;
		
};

#endif

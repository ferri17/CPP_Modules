/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/23 22:57:16 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal{

	protected:
		std::string	_type;
		Animal( std::string const & type );
	public:
		Animal( void );
		Animal( Animal const & other );
		Animal &	operator=( Animal const & other );
		virtual	~Animal( void );

		virtual void	makeSound( void ) const;

		std::string	getType( void ) const;
		
};

#endif

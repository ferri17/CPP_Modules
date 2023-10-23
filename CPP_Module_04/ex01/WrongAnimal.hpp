/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/24 00:23:05 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal{

	protected:
		std::string	_type;
		WrongAnimal( std::string const & type );
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & other );
		WrongAnimal &	operator=( WrongAnimal const & other );
		~WrongAnimal( void );

		void	makeSound( void ) const;

		std::string	getType( void ) const;
		
};

#endif

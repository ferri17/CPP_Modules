/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/26 17:26:11 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal{

	protected:
		std::string	_type;
		AAnimal( std::string const & type );
	public:
		AAnimal( void );
		AAnimal( AAnimal const & other );
		AAnimal &	operator=( AAnimal const & other );
		virtual	~AAnimal( void );

		virtual void	makeSound( void ) const = 0;

		std::string	getType( void ) const;
		
};

#endif

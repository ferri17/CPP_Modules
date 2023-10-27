/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/27 12:48:31 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria {

	protected:
		std::string	_type;
	public:
	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & other );
	AMateria &	operator=( AMateria const & other );
	virtual ~AMateria( void );
	
	
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter & target );
};

#endif

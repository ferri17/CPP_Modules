/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/28 23:55:27 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define SLOTS_S 4

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *	_materias[ SLOTS_S ];
	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & other );
		MateriaSource &	operator=( MateriaSource const & other );
		~MateriaSource( void );
		
		void		learnMateria( AMateria * m);
		AMateria *	createMateria( std::string const & type );
		
};

#endif

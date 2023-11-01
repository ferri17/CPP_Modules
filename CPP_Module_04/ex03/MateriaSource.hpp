/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/11/01 14:28:25 by fbosch           ###   ########.fr       */
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

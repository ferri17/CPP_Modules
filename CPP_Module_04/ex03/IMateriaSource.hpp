/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:34:46 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/28 23:35:03 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{

	public:
		virtual				~IMateriaSource( void ) {}
		virtual void		learnMateria( AMateria * ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;
		
};

#endif

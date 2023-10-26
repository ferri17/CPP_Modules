/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/24 00:54:04 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define NB_IDEAS 100

# include <iostream>

class	Brain{

	protected:
		std::string	_ideas[ NB_IDEAS ];
	public:
		Brain( void );
		Brain( Brain const & other );
		Brain &	operator=( Brain const & other );
		~Brain( void );

};

#endif

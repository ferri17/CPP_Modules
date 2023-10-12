/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:22:03 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 14:23:38 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>

class	Point{

	private:
		Fixed const	x;
			
	public:
		Point( void );
		Point( const int nb );
		Point( const float nb );
		Point( const Fixed &fixed );
		Fixed	&operator=( const Fixed &other );
		~Point(void);
		
};

std::ostream	&operator<< (std::ostream &out, const Fixed &nb);

#endif

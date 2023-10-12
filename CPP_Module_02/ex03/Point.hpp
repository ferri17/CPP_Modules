/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:22:03 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 20:18:34 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <cmath>

class	Point{

	private:
		const Fixed	_x;
		const Fixed	_y;
			
	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &other );
		Point	&operator=( const Point &other);
		~Point( void );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
	
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif

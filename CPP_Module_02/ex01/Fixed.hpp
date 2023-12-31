/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/10 23:47:47 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed{

	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;	
	public:
		Fixed( void );
		Fixed( const Fixed &fixed );
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed	&operator=( const Fixed &other );
		~Fixed(void);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
};

std::ostream	&operator<< (std::ostream &out, const Fixed &nb);

#endif

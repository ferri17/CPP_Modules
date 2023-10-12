/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/12 14:18:17 by fbosch           ###   ########.fr       */
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
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed( const Fixed &fixed );
		Fixed	&operator=( const Fixed &other );
		~Fixed(void);
		
		bool	operator<( const Fixed &other );
		bool	operator>( const Fixed &other );
		bool	operator<=( const Fixed &other );
		bool	operator>=( const Fixed &other );
		bool	operator==( const Fixed &other );
		bool	operator!=( const Fixed &other );

		Fixed	operator+( const Fixed &other );
		Fixed	operator-( const Fixed &other );
		Fixed	operator*( const Fixed &other );
		Fixed	operator/( const Fixed &other );
		
		Fixed	&operator++( void );				//	Pre-increment
		Fixed	&operator--( void );
		Fixed	operator++( int );					//	Post-increment
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed		&min( Fixed &nb1, Fixed &nb2);
		static Fixed		&max( Fixed &nb1, Fixed &nb2);
		static const Fixed	&min( const Fixed &nb1, const Fixed &nb2);
		static const Fixed	&max( const Fixed &nb1, const Fixed &nb2);
		
};

std::ostream	&operator<< (std::ostream &out, const Fixed &nb);

#endif

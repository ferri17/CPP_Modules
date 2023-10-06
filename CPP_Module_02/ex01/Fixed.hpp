/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/06 17:37:14 by fbosch           ###   ########.fr       */
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
		
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2023/10/06 00:28:21 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{

	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;	
	public:
		Fixed( void );
		Fixed( const Fixed &fixed );
		Fixed	&operator=( const Fixed &other );
		~Fixed(void);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
};

#endif

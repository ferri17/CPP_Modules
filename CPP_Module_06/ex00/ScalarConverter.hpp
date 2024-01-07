/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/01/04 12:06:38 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTOR_HPP
# define SCALARCONVERTOR_HPP

# include <iostream>
# include <limits.h>

class	ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter & other );
		ScalarConverter &	operator=(const ScalarConverter & other);
		~ScalarConverter( void );
	public:
		static void	convert( const std::string & value );
};

#endif

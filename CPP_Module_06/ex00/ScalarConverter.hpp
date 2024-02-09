/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/08 11:46:59 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTOR_HPP
# define SCALARCONVERTOR_HPP

# include <iostream>
# include <climits>

typedef enum	type
{
	_NONE_P,
	_CHAR_P,
	_INT_P,
	_FLOAT_P,
	_DOUBLE_P
}	dataType;

class	ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter & other );
		ScalarConverter &	operator=(const ScalarConverter & other);
		~ScalarConverter( void );
	public:
		static void		convert( const std::string & value );
		static dataType	getType(const std::string & value);
};

#endif

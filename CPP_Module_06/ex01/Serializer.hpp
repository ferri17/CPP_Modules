/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:55:34 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/11 20:34:59 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef struct	Data
{
	std::string	name;
	int			code;
}	Data;

class	Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer & other);
		Serializer &	operator=(const Serializer & other);
		~Serializer(void);
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data *		deserialize(uintptr_t raw);
};

#endif

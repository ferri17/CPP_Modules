/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:02:59 by fbosch            #+#    #+#             */
/*   Updated: 2023/09/20 01:42:52 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	searchContact();
};

#endif
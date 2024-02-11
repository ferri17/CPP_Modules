/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/11 20:35:12 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		privateData = {"sterculosi", 8919900};
	Data *		deserializedData;
	uintptr_t	serializedData;

	std::cout << "Data: " << privateData.name << std::endl;
	std::cout << "Code: " << privateData.code << std::endl;
	std::cout << "Address: " << &privateData << std::endl << std::endl;

	serializedData = Serializer::serialize(&privateData);
	std::cout << "Serialized data: " << serializedData << std::endl << std::endl;

	deserializedData = Serializer::deserialize(serializedData);
	std::cout << "Data: " << deserializedData->name << std::endl;
	std::cout << "Code: " << deserializedData->code << std::endl;
	std::cout << "Address: " << deserializedData << std::endl << std::endl;

	serializedData = Serializer::serialize(deserializedData);
	std::cout << "New serialized data: " << serializedData << std::endl;
	return (0);
}

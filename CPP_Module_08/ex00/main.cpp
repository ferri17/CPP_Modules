/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 00:45:29 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/16 13:28:52 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	easyfind(v, 2);

	std::deque<int>	dq;

	dq.push_back(897);
	dq.push_back(-323223);
	dq.push_back(0);
	try
	{
		easyfind(dq, -323224);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

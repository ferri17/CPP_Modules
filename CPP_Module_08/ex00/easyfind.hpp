/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/14 20:11:29 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

template <typename T>
void	easyfind(T param, int n)
{
	if (std::find(param.begin(), param.end(), n) != param.end())
		std::cout << "Element found" << std::endl;
	else
		throw std::invalid_argument("Element not found");
}

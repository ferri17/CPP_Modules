/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbosch <fbosch@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:26:25 by fbosch            #+#    #+#             */
/*   Updated: 2024/02/12 00:09:28 by fbosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T & value1, T & value2)
{
	T	tmp = value1;

	value1 = value2;
	value2 = tmp;
}

template <typename T>
const T min(const T & value1, const T & value2)
{
	return (value2 <= value1 ? value2 : value1);
}

template <typename T>
const T max(const T & value1, const T & value2)
{
	return (value2 >= value1 ? value2 : value1);
}

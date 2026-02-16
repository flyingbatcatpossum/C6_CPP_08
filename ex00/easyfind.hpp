/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:14:06 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/16 17:58:32 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it != a.end())
	{
		std::cout << "Researched value has been found at position : " << std::distance(a.begin(), it) << std::endl;
		return (it);
	}
	else
	{
		throw(std::out_of_range("Researched value not found.\n"));
	}
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:14:06 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/16 16:21:26 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <list>
#include <algorithm>
#include <deque>
#include <vector>

template <typename T>
bool easyfind(T a, int b)
{
	typename T::iterator it = std::find(a.begin(), a.end(), b);
	if (it != a.end())
	{
		std::cout << "Researched value has been found." << std::endl;
		return (true);
	}
	else
	{
		std::cerr << "Researched value not found." << std::endl;
		return(false);
	}
}

#endif
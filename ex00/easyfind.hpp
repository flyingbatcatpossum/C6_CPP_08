/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:14:06 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/13 18:41:55 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <list>
#include "easyfind.hpp"

template <typename T>
T easyfind(T a, int b)
{
	if (a < b)
		return (a);
	else
		return(b);
};

#endif
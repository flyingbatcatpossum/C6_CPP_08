/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:13:49 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/13 18:16:03 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int	main()
{
	std::cout << easyfind<int>(10, 23) << std::endl;
	std::cout << easyfind<char>('A', 'P') << std::endl;
	return (0);
}
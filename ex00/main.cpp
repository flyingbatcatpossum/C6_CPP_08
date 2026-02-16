/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:13:49 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/16 16:23:11 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
//	std::list<int>	l1 = {4, 56, 12, 6};
	std::vector<int>	v1;
	v1.push_back(12);
	v1.push_back(4);
	v1.push_back(2);
	v1.push_back(1);

	bool i = easyfind(v1, 4);
	std::cout << i << std::endl;

	return (0);
}
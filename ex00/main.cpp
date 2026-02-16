/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:13:49 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/16 18:13:58 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	int	r = 4;
	std::list<int>	l1; // 4, 56, 0, 4, 31, 3
	std::vector<int>	v1; // 12, 0, 1, 4
	
	l1.push_front(4);
	l1.push_front(0);
	l1.push_front(56);
	l1.push_front(4);
	l1.push_back(31);
	l1.push_back(3);
	
	v1.push_back(12);
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(4);
	
	try
	{
		std::list<int>::iterator it = easyfind(l1, r);
		std::cout << "Value researched in l1 : " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value researched in l1 : " << e.what();
	}
	
	try
	{
		std::vector<int>::iterator it = easyfind(v1, r);
		std::cout << "Value researched in v1 : " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Value researched in v1 : " << e.what();
	}

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:46:54 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/17 18:25:14 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	unsigned int	lim1 = 150;
	Span	S1(lim1);

	S1.addNbList(lim1);
/*	for (unsigned int i = 0; i < lim; i++)
	{
		if (!(i % 10))
			std::cout << i << '\t' << S1.getElement(i) << std::endl;
	}*/

	S1.longestSpan();
	std::cout << "LongestSpan() of S1 : " << S1.getLong() << std::endl;

	S1.shortestSpan();
	std::cout << "ShortestSpan() of S1 : " << S1.getShort() << std::endl;
	
	std::cout << "\n";

	try
	{
		unsigned int	lim2 = 5;
		Span	S2(lim2);

		S2.addNumber(20);
		S2.addNumber(4);
		S2.addNumber(81);
		S2.addNumber(31);
		S2.addNumber(21);
//		S2.addNumber(90);

/*		for (unsigned int i = 0; i < lim2; i++)
		{
			if (!(i % 1))
				std::cout << i << '\t' << S2.getElement(i) << std::endl;
		}*/
		S2.longestSpan();
		std::cout << "LongestSpan() of S2 : " << S2.getLong() << std::endl;

		S2.shortestSpan();
		std::cout << "ShortestSpan() of S2 : " << S2.getShort() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "Error detected : " << e.what();
	}
}
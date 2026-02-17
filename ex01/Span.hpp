/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:47:38 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/17 17:22:38 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	public:
		Span();
		~Span();
		Span(const Span &src);
		Span(unsigned int limit);

		unsigned int	getLong();
		unsigned int	getShort();
		unsigned int	getElement(unsigned int i);

		void	addNumber(unsigned int add);
		void	addNbList(unsigned int nb);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	
	private:
		unsigned int	_limit;
		unsigned int	_i;
		unsigned int	_long;
		unsigned int	_short;
		std::vector<unsigned int>	_list;

	protected:

};

#endif
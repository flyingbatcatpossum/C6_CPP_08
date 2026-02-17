/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleung-t <kleung-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:48:22 by kleung-t          #+#    #+#             */
/*   Updated: 2026/02/17 18:20:04 by kleung-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//____	Constructors-Destructors

Span::Span()
{
	_i = 0;
	_limit = 0;
	_short = 0;
	_long = 0;
}

Span::~Span()
{}

Span::Span(const Span &src)
{
	_i = src._i;
	_limit = src._limit;
	_short = src._short;
	_long = src._long;
}

Span::Span(unsigned int limit)
{
	_i = 0;
	_limit = limit;
	_short = 0;
	_long = 0;
}

//____	Public

unsigned int	Span::getLong()
{
	return(_long);
}

unsigned int	Span::getShort()
{
	return (_short);
}

unsigned int	Span::getElement(unsigned int i)
{
	return (_list[i]);
}

void	Span::addNumber(unsigned int add)
{
	if (std::distance(_list.begin(), _list.end()) >= _limit)
	{
		throw (std::out_of_range("The limit has been reached, the number cannot be added.\n"));
	}
	else
		_list.push_back(add);
}

void	Span::addNbList(unsigned int nb)
{
	for (unsigned int u = 0; u < nb; u++)
	{
		int i = rand() %(UINT_MAX);
		_list.push_back(i);
	}
}

unsigned int	Span::longestSpan()
{
	unsigned int	min = _list[0];
	unsigned int	max = _list[0];

	for (unsigned int i = 0; i < _limit; i++)
	{
		if (_list[i] < min)
		{
			min = _list[i];
//			std::cout << min << "\t| " << max << "\t= " << max - min << std::endl;
		}
		else if (_list[i] > max)
		{
			max = _list[i];
//			std::cout << min << "\t| " << max << "\t= " << max - min << std::endl;
		}
	}
	_long = (max - min);
	return (_long);
}

unsigned int	Span::shortestSpan()
{
	unsigned int	tmp_short = UINT_MAX;

	for(unsigned int o = 0; o < _limit; o++)
	{
		for(unsigned int p = 0; p < _limit; p++)
		{
			unsigned int tmp;
			if (_list[o] > _list[p])
				tmp = _list[o] - _list[p];
			else
				tmp = _list[p] - _list[o];
			if (tmp_short > tmp && (_list[p] != _list[o]))
			{
				tmp_short = tmp;
//				std::cout << getElement(o) << "\t| " << getElement(p) << "\t= " << tmp_short << std::endl;
			}
		}
	}
	_short = tmp_short;
	return (_short);
}

//____	Private

//____	Protected
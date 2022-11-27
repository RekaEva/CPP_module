/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:20:01 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/16 14:35:58 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size)
{
    this->_size = size;
}

Span::Span(const Span& val) : _size(val._size)
{}

Span& Span::operator= (const Span& val)
{
	if (this == &val)
		return *this;
	_size = val._size;
	array = val.array;
	return *this;
}

Span::~Span()
{}

int	Span::getSize() const
{
	return _size;
}

void Span::addNumber(int val)
{
	if (array.size() == _size)
		throw std::length_error("Array size limit reached.");
	array.push_back(val);
}

int	Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("No enougth element");
	std::sort(array.begin(), array.end());
	int span = (array[1] - array[0]);
	for (iterator it = (array.begin() + 1); it != (array.end() - 1) && span !=0 ; it++)
		if ((*(it + 1) - *it) < span)
			span = *(it + 1) - *it;
	return span;
}

int Span::longestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("No enougth element");
	iterator imin = std::min_element(array.begin(), array.end());
	iterator imax = std::max_element(array.begin(), array.end());
	return (*imax - *imin);
}
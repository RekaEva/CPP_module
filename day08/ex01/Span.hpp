/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:19:58 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/16 13:44:31 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
private:
	typedef std::vector<int>::iterator iterator;
	
	unsigned int	_size;
	std::vector<int>	array;
	
public:
	Span(unsigned int size);
	Span(const Span& val);
	Span& operator= (const Span& val);
	~Span();
	int	getSize() const;
	void addNumber(int val);
	int	shortestSpan();
	int longestSpan();
};

#endif

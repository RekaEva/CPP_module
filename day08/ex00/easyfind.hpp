/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:46:28 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/16 13:12:17 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define  EASYFIND_HPP

# include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <array>
#include <list>

template <typename T>
typename T::const_iterator easyfind(T& array, int toFind)
{
	typename T::const_iterator it;
	if (array.empty())
		throw std::range_error("Exception. Array is empty.");
	it = std::find(array.begin(), array.end(), toFind);
	if (it == array.end())
		throw std::out_of_range("Element not found");
	return it;
}

#endif

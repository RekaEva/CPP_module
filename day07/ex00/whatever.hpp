/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:51:26 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/14 13:26:51 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
template <typename T>

void swap(T &a, T &b){
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min (T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
const T &max(const T& a, const T& b)
{
		return (a > b)? a: b;
}

#endif
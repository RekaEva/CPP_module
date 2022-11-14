/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:35:11 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/14 14:32:33 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
template <typename T>
void	iter( T *array, int len_arr, void (*function)(T &))
{
	if (!array)
	{
		std::cout << "return"<< std::endl;
		return;
	}	
	for (int i = 0; i < len_arr; i++)
		function(array[i]);
}

#endif
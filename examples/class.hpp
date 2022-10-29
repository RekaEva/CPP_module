/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:17:55 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/29 18:24:34 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>

class Numbers
{
	private:
		int x;
		int y;
	public:
		Numbers();
		~Numbers();
	void set(int x, int y);
	void print();
	
};

Numbers::Numbers()
{
}

Numbers::~Numbers()
{
}

#endif
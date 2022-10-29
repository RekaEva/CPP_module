/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:17:28 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/29 18:40:00 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

void Numbers::set(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Numbers::print()
{
	std::cout << "Numbers(" << Numbers::x << ", " << Numbers::y << ")" << std::endl;
}

int main()
{
	Numbers n1;
	// Numbers n2;
	n1.set(3,3);
	 // инициализируем объект n1 значениями 3 и 3

	// Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4
	Numbers n2;
	n2.set(4, 5);
	n1.print();
	n2.print();

	return 0;
}
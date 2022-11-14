/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:51:21 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/14 14:34:41 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T &data)
{
	std::cout << data << std::endl;
}

int main( void )
{
	int a[]={1,2,3,4,5,6};
	std::string str[]={"AAA","BBB","CCC","DDD"};

	iter(a, 6, print); // что и как передавать?
	iter(str, 4, print);

	// int *b = 0;
	// iter(b, 3, print); // не срабатывает как надо
}

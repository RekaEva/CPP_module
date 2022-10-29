/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:22:28 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/29 13:55:54 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n;

	n = 15;
	Zombie *my_army = zombieHorde(n, "Boris");
	for (int i = 0; i < n; i++)
		my_army[i].announce();
	delete [] my_army;
	return (0);
} 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:35:42 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/29 14:00:49 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	Ben("Ben");
	Zombie	*John;

	Ben.announce();
	John = newZombie("John");
	John->announce();
	randomChump("Andy");
	delete John;
	return (0);
} 
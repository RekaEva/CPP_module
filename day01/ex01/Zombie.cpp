/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:22:37 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/28 22:17:45 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	name = "Zombie";
}

void	Zombie::setName(std::string zombie_name)
{
	this->name = zombie_name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *army = new Zombie[N];
	for (int i = 0; i < N; i++)
		army[i].setName(name);
	return (army);
}

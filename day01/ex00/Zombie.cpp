/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:35:54 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/28 17:16:53 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed..." << std::endl;
}

void randomChump( std::string name )
{
	Zombie	Chump = Zombie(name);
	Chump.announce();
}

Zombie *newZombie(std::string name)
{
	Zombie *nzombie = new Zombie(name);
	return (nzombie);
}

void	Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

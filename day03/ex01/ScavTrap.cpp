/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:58:42 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/04 21:30:26 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap ()
{
	setHP(100);
	setEnergy(50);
	setAttackDamage(20);
	std::cout<<"Default constructor ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap"<< this->getName() << " is now in Gate keeper mode" << std::endl;
}
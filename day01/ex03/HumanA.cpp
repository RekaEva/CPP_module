/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:25:37 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/01 13:31:18 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{

	std::cout<<name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name),  _weapon(weapon)
{
	// this->name = name;
}

HumanA::~HumanA()
{
}

/*
	int a; 
	a = 2;

	int a = 2; // это для случая : _weapon(weapon)
	
*/

// HumanA::HumanA() : a(2)
// {
// }

// HumanA::~HumanA()
// {
// }

/*
	int a;
	a = 2;

	int a = 2;
	
*/
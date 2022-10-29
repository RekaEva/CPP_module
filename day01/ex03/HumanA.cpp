/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:25:37 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/29 19:44:09 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	using std::cout; using std::endl;

	cout<<name << " attacks with their " << weapon.getType() <<endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) //  это вообще что??
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}

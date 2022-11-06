/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:58:42 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/06 17:45:57 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap () // инициализируем новые данные
{
	setHP(100);
	setEnergy(50);
	setAttackDamage(20);
	std::cout<<"Default constructor ScavTrap" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) // сначала вызывается логика claptrap, потом scavtrap
{
	std::cout<<"ScavTrap default constructor with name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &val) : ClapTrap(val) // сначала вызывается логика claptrap, потом scavtrap
{
	std::cout<<"ScavTrap copy constructor" << std::endl; // конструктор копирования
}

const ScavTrap &ScavTrap::operator =(const ScavTrap &obj) // вызываем череp ScavTrap данные из ClapTrap и переписываем в ScavTrap?
{
	setName(obj.getName());
	setHP(obj.getHP());
	setEnergy(obj.getEnergy());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap"<< this->getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHP()&& getEnergy() <= 0)
		std::cout<<"You cann't attack this object\n" << std::endl;
	else
	{
		std::cout << "ScapTrap " << getName() << "attacks " << target << \
		", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
}
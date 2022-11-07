/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:54:25 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 14:32:21 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap ()
{
	setHP(100);
	setEnergy(100);
	setAttackDamage(30);
	std::cout<<"Default constructor FragTrap" << getName() << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	setHP(100);
	setEnergy(100);
	setAttackDamage(30);
	std::cout<<"FragTrap default constructor with name" << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap &val) : ClapTrap(val) 
{
	std::cout<<"FragTrap copy constructor" << std::endl;
}

const FragTrap &FragTrap::operator =(const FragTrap &obj)
{
	setName(obj.getName());
	setHP(obj.getHP());
	setEnergy(obj.getEnergy());
	setAttackDamage(obj.getAttackDamage());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap" << getName() << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap "<< this->getName() << " says, \"High five!\"" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (getHP()&& getEnergy() <= 0)
		std::cout<<"You cann't attack this object\n" << std::endl;
	else
	{
		std::cout << "FcagTrap " << getName() << " attacks " << target << \
		", causing " << getAttackDamage() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	std::cout<< getName() <<"'s health is "<< getHP()<< "HP\t"<< "energy is "<< getEnergy()<< " point"<<std::endl;
}
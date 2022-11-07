/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:41 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 13:39:24 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	hitPoint = 10;
	Energy = 10;
	attackDamage = 0;
	std::cout<<"Default constructor ClapTrap " << name  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &new_obj)
{
	std::cout << "Copy constructor called\n";
	*this = new_obj;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &obj) // пишем ключевое слово operator, показываем какой(=), и говорим откуда копировать данные
{
	std::cout << "Copy assignment operator called\n";
	name = obj.getName();
	hitPoint = obj.getHP();
	Energy = obj.getEnergy();
	attackDamage = obj.getAttackDamage();
	return (*this); // возвращаем указатель на ноый объект(который здесь создан);
}

ClapTrap::~ClapTrap(){ std::cout << "Destructor called " << name << std::endl; }

ClapTrap::ClapTrap(const std::string &_name)
{
	this->name = _name;
	this->hitPoint = 10;
	this->Energy = 10;
	this->attackDamage = 0;
	std::cout<<"Constructor with name" << name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoint && Energy <= 0)
		std::cout<<"You cann't attack this object\n" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << \
		", causing " << attackDamage << " points of damage!" << std::endl;
		Energy--;
	}
	std::cout<< name <<"'s health is "<< hitPoint<< "HP\t"<< "energy is "<< Energy<< " point"<<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint > 0)
	{
		hitPoint -= amount;
		std::cout<< "ClapTrap "<< name<< " takes "<< amount<< " HP damage"<<std::endl;
	}
	else
		std::cout<< "ClapTrap "<< name<< " is already dead."<<std::endl;
	std::cout<< name <<"'s health is "<< hitPoint<< "HP\t"<< "energy is "<< Energy<< " point"<<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint > 0 &&  Energy > 0)
	{
		Energy--;
		hitPoint += amount;
		std::cout << "ClapTrap "<< name << " repairs " << amount << " HP" << std::endl;
	}
	else
		std::cout<< "ClapTrap "<< name << " has no energy or HP. It can't to do anything." << std::endl;
	std::cout<< name <<"'s health is "<< hitPoint<< "HP\t"<< "energy is "<< Energy<< " point"<<std::endl;	
}

void ClapTrap::setAttackDamage(int damage)
{
	attackDamage = damage;
}

int ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}

void ClapTrap::setName(std::string _name)
{
	name = _name;
}

std::string ClapTrap::getName() const
{
	return (name);
}

void ClapTrap::setHP(int hp)
{
	hitPoint = hp;
}

int ClapTrap::getHP() const
{
	return (hitPoint);
}

void ClapTrap::setEnergy(int _Energy)
{
	Energy = _Energy;
}

int ClapTrap::getEnergy() const
{
	return (Energy);
}

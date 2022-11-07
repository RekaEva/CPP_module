/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/04 18:05:11 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
#include <string.h>
#include <iostream>


class ClapTrap
{
private:
	std::string	name;
	int hitPoint;
	int Energy;
	int attackDamage;
public:
	ClapTrap(); // default_constructor
	ClapTrap(const ClapTrap &new_obj); // Copy constructor
	ClapTrap &operator = (const ClapTrap &obj); // перегрузка 
	~ClapTrap(); // destructor
	ClapTrap(const std::string &name);//constructor
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setAttackDamage(int attackDamage);
	int getAttackDamage() const;
	void setName(std::string name);
	std::string getName() const;
	void setHP(int hp);
	int getHP() const;
	void setEnergy(int Energy);
	int getEnergy() const;
};

#endif
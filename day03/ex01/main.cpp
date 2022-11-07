/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 14:11:19 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Alpha("Alpha");
	ClapTrap Beta("Beta");

	Alpha.attack("Beta");
	Alpha.setAttackDamage(4);
	Alpha.attack("Beta");
	Beta.takeDamage(Alpha.getAttackDamage());
	Beta.beRepaired(5);

	ScavTrap Gamma("Gamma");
	Gamma.guardGate();
	Alpha.attack("Beta");
	Beta.takeDamage(Alpha.getAttackDamage());
	Alpha.attack("Gamma");
	Gamma.takeDamage(Alpha.getAttackDamage());
	Beta.takeDamage(30);
	Beta.beRepaired(15);
	Gamma.takeDamage(40);
	Gamma.beRepaired(20);
	
}
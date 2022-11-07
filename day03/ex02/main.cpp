/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 14:26:56 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Alpha("Alpha");
	ScavTrap Beta("Beta");
	FragTrap Delta("Delta");

	Alpha.attack("Delta");
	Delta.takeDamage(Alpha.getAttackDamage());
	Delta.attack("Alpha");
	Alpha.takeDamage(Delta.getAttackDamage());
	Delta.beRepaired(20);
	Beta.guardGate();
	Beta.attack("Delta");
	Delta.takeDamage(2);
	Delta.highFivesGuys();
	return (0);
}
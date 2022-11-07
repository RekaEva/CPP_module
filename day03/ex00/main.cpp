/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 14:07:33 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Alpha("Alpha");
	ClapTrap Beta("Beta");

	Alpha.attack("Beta");
	Alpha.setAttackDamage(7);
	Alpha.attack("Beta");
	Beta.takeDamage(Alpha.getAttackDamage());
	Beta.beRepaired(5);
}

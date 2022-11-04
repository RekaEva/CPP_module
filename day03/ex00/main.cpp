/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:20:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/04 18:42:20 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap Alpha;
	ClapTrap Beta;

	Alpha.attack("Bbb");
	Alpha.setAttackDamage(10);
	Alpha.attack("Bbb");
	Beta.takeDamage(Alpha.getAttackDamage());
	Beta.beRepaired(5);
}
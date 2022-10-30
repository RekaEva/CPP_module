/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:45:28 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/30 12:46:57 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon (std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

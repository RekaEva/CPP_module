/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:14:08 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 17:43:19 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[DEBUG]\n \
I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]\n \
I cannot believe adding extra bacon costs more money.\
You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]\n\
I think I deserve to have some extra bacon for free.\
I’ve been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]\n\
This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string _level)
{	
	int i;
	int lvl;

	for (i=0; i <4; i++)
	{
		if (this->level[i] == _level)
			lvl=i;
	}
	switch (lvl)
	{
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
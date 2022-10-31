/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:04:04 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 15:28:27 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	ptr_func[0] = &Harl::debug;
	ptr_func[1] = &Harl::info;
	ptr_func[2] = &Harl::warning;
	ptr_func[3] = &Harl::error;
	level[0] = "debug";
	level[1] = "info";
	level[2] = "warning";
	level[3] = "error";
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << DEBUG << std::endl;
}

void Harl::info()
{
	std::cout << INFO << std::endl;
}

void Harl::warning()
{
	std::cout << WARNING << std::endl;
}

void Harl::error()
{
	std::cout << ERROR << std::endl;
}

void Harl::complain(std::string _level)
{	
	int i;
	for (i = 0; i < 4; i++)
	{
		if (this->level[i] == _level)
		{
			(this->*ptr_func[i])();
		}
	}
}
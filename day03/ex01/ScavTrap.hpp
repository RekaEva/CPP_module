/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:58:45 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/06 16:46:26 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP 
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &val);
	const ScavTrap&	operator = (const ScavTrap &val);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string& target);
};


#endif
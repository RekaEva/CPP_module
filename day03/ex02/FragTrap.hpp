/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:54:27 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/07 13:12:45 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &val);
	const FragTrap&	operator = (const FragTrap &val);
	~FragTrap();
	void highFivesGuys(void);
	void attack(const std::string& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:04:06 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 15:22:23 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
# define INFO  "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class Harl
{
private:
	void (Harl::*ptr_func[4])();
	std::string level[4];
	void debug(void);
	void info (void);
	void warning (void);
	void error (void);
public:
	void complain(std::string level);
	Harl();
	~Harl();
};

#endif
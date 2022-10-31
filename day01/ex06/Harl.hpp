/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:14:05 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 17:43:22 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define DEBUG 
# define INFO  
# define WARNING 
# define ERROR 

class Harl
{
private:
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
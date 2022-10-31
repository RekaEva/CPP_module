/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:14:03 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 17:46:45 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	else
		std::cout << "Usage: ./harl <Complain>\n\
Where <Complain> is: \"debug\", \"info\", \"warning\", \"error\" or \"Something else\"" << std::endl;

	return (0);
}
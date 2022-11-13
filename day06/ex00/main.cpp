/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:04:17 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/13 15:57:24 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <exception>

int main(int argc, char **argv)
{
	double a;
	std::string str;
	if (argc !=2)
	{
		std::cout << "Error argument!" << std::endl;
		return 1;
	}
	str = argv[1];
	if (str.length() == 1 && !std::isdigit(argv[1][0]))
		a = static_cast<double>(str[0]); // переводим 
	else
	{
		try
		{
			a = std::stod(str);
		}
		catch(const std::invalid_argument& ia)
		{
			std::cout << "No recognized numbers or char\nType of arguments: <number> or <char>" <<std::endl;
			return 1;
		}
	}
	std::cout.precision(1); // количество знаков после запятой
	std::cout.setf(std::ios::fixed); // отображение числа 
	if (a == std::numeric_limits<double>::infinity()  
		|| a == -std::numeric_limits<double>::infinity() || std::isnan(a))
		std::cout << "char : impossible" << std::endl;
	else
	{
		char	c = static_cast<char>(a);
		if (c < 32 || c > 126)
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char : "<< c << std::endl;
	}
	if (a == std::numeric_limits<double>::infinity() 
		|| a == -std::numeric_limits<double>::infinity() || std::isnan(a))
			std::cout << "int : impossible" << std::endl;
	else
	{
		int	i = static_cast<int>(a);
		if (a > std::numeric_limits<int>::max()  
			|| a < -std::numeric_limits<int>::max())
			std::cout << "int : Non displayable" << std::endl;
		else
			std::cout << "int : "<< i << std::endl;
	}
	std::cout << "float: " << static_cast<float>(a) << "f" << std::endl;
	std::cout << "double: " << a << std::endl;
	return (0);
}
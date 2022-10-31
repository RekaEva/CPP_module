/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:36:51 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/31 16:42:30 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

enum Colors
{
	COLOR_GRAY,
	COLOR_PINK,
	COLOR_BLUE,
	COLOR_PURPLE,
	COLOR_RED
};

void printColor(Colors color)
{
	switch (color)
 {
	case COLOR_GRAY:
		std::cout << "Gray";
		break;
	case COLOR_PINK:
		std::cout << "Pink";
		break;
	case COLOR_BLUE:
		std::cout << "Blue";
		break;
	case COLOR_PURPLE:
		std::cout << "Purple";
		break;
	case COLOR_RED:
		std::cout << "Red";
		break;
	default:
		std::cout << "Unknown";
		break;
 }
}

// void printColor(Colors color)
// {
// 	if (color == COLOR_GRAY)
// 		std::cout << "Gray";
// 	else if (color == COLOR_PINK)
// 		std::cout << "Pink";
// 	else if (color == COLOR_BLUE)
// 		std::cout << "Blue";
// 	else if (color == COLOR_PURPLE)
// 		std::cout << "Purple";
// 	else if (color == COLOR_RED)
// 		std::cout << "Red";
// 	else
// 		std::cout << "Unknown";
// }

int main()
{
	printColor(COLOR_BLUE);
	return 0;
}

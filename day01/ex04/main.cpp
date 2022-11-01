/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:30:42 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/01 14:34:21 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sedisforlousers <source_file> <string_for_search> <string_for_replace>" << std::endl;
		return (0);
	}
	std::ifstream inFile;
	inFile.open(argv[1], std::ifstream::in);
	if (!inFile.is_open())
	{
		std::cout << "inFile doesn't open" << std::endl;
		return 1;
	}
	std::string outFilename;
	outFilename = std::string(argv[1]) + ".replace";
	std::ofstream outFile;
	outFile.open(outFilename, std::ofstream::out | std::ofstream::trunc);
	if (!outFile.is_open())
	{
		std::cout << "outFile doesn't open" << std::endl;
		return 2;
	}
	std::string strInput;
	int position;
	while (std::getline(inFile, strInput))
	{
		position = strInput.find(argv[2]);
		while (position != -1)
		{
			strInput.erase(position, std::string(argv[2]).length());
			strInput.insert(position, std::string(argv[3]));
			position = strInput.find(std::string(argv[2]), position + std::string(argv[2]).length());
		}
		outFile << strInput << std::endl;	
	}
		
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeptions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:02:40 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/11 12:53:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "math.h" // для функции sqrt()

int main()
{
	std::cout << "Enter a number: ";
	double a;
	std::cin >> a;

	try // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{// Если пользователь ввел отрицательное число, то выбрасывается исключение
		if (a < 0.0)
			throw "Can not take sqrt of negative number"; // выбрасывается исключение типа const char*
		if (!isdigit(a))
			throw "@string!!!!";
				// Если пользователь ввел положительное число, то выполняется операция и выводится результат
		std::cout << "The sqrt of " << a << " is " << sqrt(a) << '\n';
	}
	catch (const char* exception) // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
	}
}




//  int main()
// {
// 	try
//  	{ // Здесь мы пишем стейтменты, которые будут генерировать следующее исключение
//  		throw -1; // типичный стейтмент throw
//  	}
//  	catch (int a)
//  	{ // Любые исключения типа int, сгенерированные в блоке try, приведенном выше, обрабатываются здесь
//  		std::cerr << "We caught an int exception with value: " << a << '\n';
//  	}
//  	catch (double) // мы не указываем имя переменной, так как в этом нет надобности (мы её нигде в блоке не используем)
//  	{ // Любые исключения типа double, сгенерированные в блоке try, приведенном выше, обрабатываются здесь
//  		std::cerr << "We caught an exception of type double" << '\n';
//  	}
//  	catch (const std::string &str) // ловим исключения по константной ссылке
//  	{ // Любые исключения типа std::string, сгенерированные внутри блока try, приведенном выше, обрабатываются здесь
// 		std::cerr << "We caught an exception of type std::string" << '\n';
// 	}

//  	std::cout << "Continuing our way!\n";

// 	return 0;
//  }
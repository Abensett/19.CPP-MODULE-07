/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/20 19:55:30 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***********************************************************************************************

	
*************************************************************************************************/
#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Array.hpp"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define END "\x1B[0m"
#define BOLD "\x1B[1m"
#define MAX_VAL 750
#define SIZE 52
using std::cout;
using std::endl;

static void	printResult(bool ok)
{
	unsigned int	size = (SIZE > 10 ? SIZE : 10);
	
	std::cout << std::setfill(' ') << std::setw(size - 3) <<  " [";
	if (ok)
		std::cout << GREEN << "OK";
	else
		std::cout << RED << "KO";
	std::cout << END << "]" << std::endl;
}

static int	testSubject(void)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = std::rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	// SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	delete[] mirror;
	return 0;
}
int main(void)
{
	srand(time(NULL));
	
	cout <<endl;
	printResult(testSubject() == 0);
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/21 14:58:04 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#include <iomanip>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define END "\x1B[0m"
#define BOLD "\x1B[1m"
#define VALUE_TEST 10
using std::cout;
using std::endl;

static int	Subject(void)
{
	Array<int> FirstArray;
	Array<int> SecondArray(VALUE_TEST);

	for (int i = 0; i < VALUE_TEST; i++)
	{
		const int value = std::rand();
		SecondArray[i] = value;
	}

	try
	{
		SecondArray[-2] = 0;					// crash
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << '\n';
	}

	try
	{
		SecondArray[VALUE_TEST - 1 ] = 0;		//don't crash
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		SecondArray[VALUE_TEST] = 0;			//crash
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << END<< '\n';
	}

	for (int i = 0; i < VALUE_TEST; i++)
	{
		SecondArray[i] = rand();
	}
	cout << FirstArray;
	cout << SecondArray;
	SecondArray[2] = 42;
	cout << SecondArray;
	return 0;
}
int main(void)
{
	srand(time(NULL));
	Subject() ;
	return (0);
}

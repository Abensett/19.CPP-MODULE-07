/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:25:41 by abensett          #+#    #+#             */
/*   Updated: 2022/07/21 14:36:01 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***********************************************************************************************
 * arg 1 = T *array
 * arg 2 = size
 * arg 3 = function (const T &)
*************************************************************************************************/
#include "iter.hpp"

using std::cout;
using std::endl;

int main (void)
{
	int			arrayInt[5] = {0, 1, 2, 3, 4};
	char		arrayChar[5] = {'s', 'a', 'l', 'u', 't'};
	const char	*arrayStrC[5] = {"Alibaba", "et", "les", "40", "voleurs."};
	std::string	arrayStr[5] = {"Alibaba C++", "et", "les", "42", "voleurs."};


	iter<int>(arrayInt, 5, printer);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, printer);
	std::cout << std::endl;

	iter<std::string>(arrayStr, 5, printer);
	std::cout << std::endl;

	iter<const char *>(arrayStrC, 5, printer);
	std::cout << std::endl;

	iter<char>(arrayChar, 5, printer);
	std::cout << std::endl;

	return (0);
}

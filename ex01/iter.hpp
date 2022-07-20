/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:38:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/20 19:47:09 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>
#include <string>

template<typename T> void	iter(const T *array, int size, void fcn(const T &))
{
	for (int i = 0; i < size; i++)
		fcn(array[i]);
}

template<typename T> void	printer(const T &data)
{
	std::cout << data << " ";
}

#endif

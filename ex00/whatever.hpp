/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:38:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/20 21:44:59 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>
#include <string>

template<typename T> void	swap(T &a, T &b)
{
	T	tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T> const T &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}


#endif

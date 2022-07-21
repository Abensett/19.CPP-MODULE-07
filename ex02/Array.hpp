/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:38:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/21 14:55:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <string>

template<typename T> class Array
{
	public:
		Array(void) : _array(NULL), _size(0) {}
		Array(const unsigned int n) : _array(new T[n]), _size(n) {}
		Array(const Array<T> &array) : _array(NULL), _size(0) { *this = array; }
		virtual ~Array() { delete [] _array; }

		Array<T>	&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (_size > 0)
					delete [] _array;
				_size = array._size;
				_array = new T[array._size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = array._array[i];
			}
			return (*this);
		}

		T	&operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= _size)
				throw OutOfRange();
			return (_array[i]);
		}

		unsigned int	size(void) const { return (_size); }

		class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception : index is out of range");
				}
		};
	private:
		T				*_array;
		unsigned int	_size;

};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	unsigned int	max = 10;

	o << "[size:" << array.size() << "] ";
	for (unsigned int i = 0; i < array.size() && i < max; i++)
		o << array[i] << " ";
	if (max < array.size())
		o << "...";
	o << std::endl;
	return (o);
}


#endif

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T>
void Iter(T *tab, int size, void(*f)(T&))
{
	int i = 0;
	while (i < size)
	{
		f(tab[i]);
		i++;
	}
}


template<typename T>
void print(T &type)
{
	std::cout << type << std::endl;
}

#endif
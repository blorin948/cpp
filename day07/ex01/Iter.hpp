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
void inc(T type)
{
	type+=1;
}

#endif
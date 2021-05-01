#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <map>
#include <list>

template<typename T>
typename T::const_iterator easyfind(T const &t, int index)
{
	typename T::const_iterator it;
	it = std::find(t.begin(), t.end(), index);
	if (it != t.end())
		return (it);
	else
		throw std::domain_error("index not found on the list");
}

#endif
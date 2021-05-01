#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

template <typename T>
class mutantstack : public std::stack<T>
{

	public :

	mutantstack()
	{

	}
	mutantstack(mutantstack const &c)
	{
		*this = c;
	}
	mutantstack &operator=(mutantstack const &c)
	{
		return (*this);
	}
	~mutantstack()
	{

	}

	typedef typename std::vector<T>::iterator iterator;
	iterator  begin(void)
	{
		return (_vect.begin());
	}
	iterator  end(void)
	{
		return (_vect.end());
	}
	void push(T value)
	{
		_vect.push_back(value);
	}
	void pop()
	{
		_vect.pop_back();
	}
	T top()
	{
		return (_vect.back());
	}
	int size(void)
	{
		return (_vect.size());
	}
	private :

	std::vector<T> _vect;
};

#endif
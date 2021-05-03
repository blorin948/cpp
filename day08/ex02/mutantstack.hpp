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

	mutantstack();
	mutantstack(mutantstack const &c);
	mutantstack &operator=(mutantstack const &c);
	~mutantstack();
	/*typedef typename std::vector<T>::iterator iterator;
	typedef typename std::vector<T>::const_iterator const_iterator;*/
	typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
	iterator  begin(void)
	{
		return std::stack<T>::c.begin();
	}
	iterator  end(void)
	{
		return std::stack<T>::c.end();
	}
	const_iterator cbegin(void) const
	{
		return std::stack<T>::c.begin();
	}
	iterator  cend(void) const
	{
		return std::stack<T>::c.end();
	}
	private :

};

template <typename T>
mutantstack<T>::mutantstack(void) : std::stack<T>()
{
	return ;
}

template <typename T>
mutantstack<T>::~mutantstack()
{ 
	return ;
}

template <typename T>
mutantstack<T>::mutantstack(mutantstack<T> const & c) : std::stack<T>(c)
{ 
	return ; 
}

template <typename T>
mutantstack<T> & mutantstack<T>::operator=(mutantstack<T> const & c)
{
	(void)c;
	return *this;
}

#endif
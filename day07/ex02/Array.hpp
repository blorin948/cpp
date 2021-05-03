#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>

template<typename T>
class Array
{

	class outOfSizeException : public std::exception
	{
		virtual const char *what() const throw();
	};
	public :

	Array(void) : _size(0)
	{
		_tab = NULL;
	}
	Array(unsigned int size) : _size(size)
	{
		_tab = new T[_size]();
	}
	T &operator[](unsigned int index);
	Array(Array const &c)
	{
	unsigned 	int i = 0;
		_size = c.getSize();
		_tab = new T[_size];
		while (i < _size)
		{
			_tab[i] = c._tab[i];
			i++;
		}
	}
	Array &operator=(Array const &c);
	~Array()
	{
		delete[] _tab;
	}
	unsigned int getSize(void) const;
	void printT() const
	{
		unsigned int i = 0;
		if (this->_size == 0)
		{

			return ;
		}
		while (i < _size)
			std::cout << _tab[i++] << std::endl;
	}

	private :

	T *_tab;
	unsigned int _size;

};


template<typename T>
unsigned int Array<T>::getSize(void) const
{
	return (this->_size);
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &c)
{

	delete[] _tab;
	unsigned int i = 0;
	_tab = NULL;
	_size = c._size;
	_tab = new T[_size];
	while (i < _size)
	{
		_tab[i] = c._tab[i];
		i++;
	}
	i = 0;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
	{
		if (index >= this->_size || index < 0)
		{
			throw Array::outOfSizeException();
		}
		return (_tab[index]);
	}

template<typename T>
const char *Array<T>::outOfSizeException::what() const throw()
{
	return ("Index [ ] operator out of limits");
}

#endif
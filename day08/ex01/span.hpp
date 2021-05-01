#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <climits>

class span
{

	public :

	span(unsigned int n);
	span(span const &c);
	span &operator=(span const &c);
	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan(void);
	void addNumber(unsigned int range, int number);
	~span();

	private :

	span();
	unsigned int _n;
	std::vector<int> cont;
};

#endif
#include "span.hpp"

span::span(unsigned int n) : _n(n)
{

}

span::span(void)
{

}

span::span(span const &c)
{
	*this = c;
}

span &span::operator=(span const &c)
{
	this->cont = c.cont;
	this->_n = c._n;
	return (*this);
}

void span::addNumber(int number)
{
	if (cont.size() >= this->_n)
		throw std::out_of_range("Class if already full.");
	cont.push_back(number);
}

int span::shortestSpan(void)
{
	if (cont.size() <= 1)
		throw std::out_of_range("Not enough number to make a span.");
	std::vector<int> copy(cont);
	std::sort(copy.begin(), copy.end());
	int diff = INT_MAX;
	int tmp = 0;
	std::vector<int>::iterator it = copy.begin();
	std::vector<int>::iterator it2 = it + 1;
	while (it != copy.end())
	{
		tmp = abs(*it - *it2);
		if (tmp < diff)
			diff = tmp;
		it++;
		it2++;
	}
	return (diff);
}

int span::longestSpan(void)
{
	if (cont.size() <= 1)
		throw std::out_of_range("Not enough number to make a span.");
	int min = *std::min_element(cont.begin(), cont.end());
	int max = *std::max_element(cont.begin(), cont.end());
	return (abs(max - min));
}

void span::addNumber(unsigned int range, int number)
{
	while (range > 0)
	{
		addNumber(number);
		range--;
	}
}

span::~span()
{

}
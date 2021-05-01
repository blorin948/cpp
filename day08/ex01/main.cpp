#include "span.hpp"

int main()
{
	int i = 0;
	span sp = span(100);
	span sp1(100000);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(2);
		while (i < 100000)
		{
		sp1.addNumber(i);
		i++;
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
std::cout << sp1.shortestSpan() << std::endl;
std::cout << sp1.longestSpan() << std::endl;

}
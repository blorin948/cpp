#include "easyfind.hpp"

int main()
{
	std::list<int> x;
	x.push_back(2);
	x.push_back(4);
	try
	{
		std::cout << *::easyfind(x, 4) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
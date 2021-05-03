
#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
#include <assert.h>

template <typename T>
void test_func()
{
	T	lst;
	
	lst.push_back(1);
	lst.push_back(17);
	lst.push_back(13);
	lst.push_back(10);
			
	typename T::const_iterator	lstfind;
	try
	{
		lstfind = easyfind(lst, 10);
		assert(lstfind != lst.end());
		std::cout << "found "<< *lstfind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		lstfind = easyfind(lst, 11);
		assert(lstfind == lst.end());
		std::cout << "didn't find 11" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		lstfind = easyfind(lst, 13);
		assert(lstfind != lst.end());
		std::cout << "found "<< *lstfind << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		lstfind = easyfind(lst, 20);
		assert(lstfind == lst.end());
		std::cout << "didn't find 20" << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
int main()
{
	std::cout << "---- LIST ----" << std::endl;
	test_func< std::list<int> >();

	std::cout << "---- VECTOR ----" << std::endl;	
	test_func< std::vector<int> >();

	std::cout << "---- DEQUE ----" << std::endl;
	test_func< std::deque<int> >();

	return (0);
}

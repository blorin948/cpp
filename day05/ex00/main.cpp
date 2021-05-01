#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat john("John", 27);
	int i = john.getGrade();
	std::cout << john << std::endl;
	std::cout << "-- Setting grade to 151 --" << std::endl;
	try
	{
		while (i < 151)
		{
			john.decr();
			i++;
		}
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Setting grade to 1. --" << std::endl;
	try
	{
		while (john.getGrade() > 1)
		john.incr();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Setting grade to -1. --" << std::endl;
	try
	{
		john.incr();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Creating a Bureaucrat with invalid grade --"<< std::endl;
	try
	{
		Bureaucrat alice("Alice", 500);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when creating Bureaucrat: " << e.what() << "." << std::endl;
	}
	return (0);
}
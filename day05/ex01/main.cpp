#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat john("John", 26);
//	int i = john.getGrade();
	std::cout << john << std::endl;
	Form form("b67", 27, 2);
		Form form2("b68", 10, 2);
	john.signForm(form);
	std::cout << john << std::endl;
	std::cout << "-- Signing bad form. --" << std::endl;
	try
	{
		form2.beSigned(john);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when signing form: " << e.what() << "." << std::endl;
	}
	std::cout << john << std::endl;
	std::cout << "-- Creating a Form with invalid grade --"<< std::endl;
	try
	{
		Form alice("Alice", 500, 20);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when creating Form: " << e.what() << "." << std::endl;
	}
	std::cout << "-- Creating a Form with invalid grade --"<< std::endl;
	try
	{
		Form alice1("Alice", 50, -1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when creating Form: " << e.what() << "." << std::endl;
	}
	return (0);
}
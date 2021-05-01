#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat sign("stef", 1);
	Bureaucrat ok("joe", 130);
	ShrubberyCreationForm t("bobo");
	RobotomyRequestForm t1("bobo2");
	PresidentialPardonForm t2("bobo3");
	try
	{
		t.beSigned(ok);
	//	std::cout << t.getTarget();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	ok.executeForm(t);
	try
	{
		t1.beSigned(sign);
	//	std::cout << t1.getTarget();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	sign.executeForm(t1);
	try
	{
		t2.beSigned(sign);
	//	std::cout << t1.getTarget();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	sign.executeForm(t2);
	try
	{
		t2.beSigned(ok);
	//	std::cout << t1.getTarget();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}


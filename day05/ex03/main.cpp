#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{

	Intern  someRandomIntern;
	Form*   t;
	Form*   t1;
	Form*   t2;
	t = someRandomIntern.makeForm("robotomy request", "Bend");
	t1 = someRandomIntern.makeForm("presidential pardon", "Bend");
	t2 = someRandomIntern.makeForm("shrubbery creation", "Bend");
	Bureaucrat sign("stef", 1);
	Bureaucrat ok("joe", 130);
	try
	{
		t->beSigned(sign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	sign.executeForm(*t);
	try
	{
		std::cout << "MDR" << std::endl;
		t1->beSigned(sign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	sign.executeForm(*t1);
	try
	{
		t2->beSigned(sign);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	sign.executeForm(*t2);
}


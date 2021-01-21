#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
				Bureaucrat ok("l", 130);
	ShrubberyCreationForm t("slt");
	try
	{
	t.beSigned(ok);
	std::cout << t.getTarget();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	ok.executeForm(t);
	
}


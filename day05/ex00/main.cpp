#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat t("joe", 2);
		t.incr();
		std::cout << t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
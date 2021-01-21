#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat jeff("jeff", 11);
	Form t("salut", 151, 15);
	std::cout << jeff;
	std::cout << t;
	jeff.signForm(t);
}
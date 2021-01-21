#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &c)
{
	*this = c;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &c)
{
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkGrade(executor);
	std::cout << executor.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}
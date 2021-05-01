#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
	setStrName("presidential pardon");
}

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	setStrName("presidential pardon");
	setTarget("unknown");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &c)
{
	*this = c;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &c)
{
	(void)c;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm *PresidentialPardonForm::clone(std::string target)
{
	return (new PresidentialPardonForm(target));
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkGrade(executor);
	std::cout << getTarget() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}
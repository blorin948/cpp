#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	setTarget("unknown");
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &c)
{
	*this = c;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &c)
{
	(void)c;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkGrade(executor);
	std::cout << "Bzzzzzzzzzzzzzzzzzzz..." << std::endl;
	 if (rand() & 1)
	 {
		 std::cout << getTarget() << " has been robotized succesfully." << std::endl; 
	 }
	 else
	 {
		 std::cout << "Failed..." << std::endl;
	 }
	 
}
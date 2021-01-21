#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public :

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &c);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &c);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;

	private :

};

#endif
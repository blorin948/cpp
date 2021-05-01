#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public :

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &c);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &c);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
	PresidentialPardonForm *clone(std::string target);

	private :


};

#endif
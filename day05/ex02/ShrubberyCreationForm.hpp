#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{

	public :

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &c);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &c);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;

	private :

};

#endif
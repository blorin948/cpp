#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	class FormDontExist : public std::exception
	{
		virtual const char *what() const throw();
	};
	public :

	Intern();
	Intern(Intern const &c);
	Intern &operator=(Intern const &c);
	~Intern();
	Form *makeForm(std::string name, std::string target);

	private :

	Form *_sample[3];

};

#endif
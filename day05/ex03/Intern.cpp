#include "Intern.hpp"

Intern::Intern(void)
{
	_sample[0] = new PresidentialPardonForm();
	_sample[1] = new RobotomyRequestForm();
	_sample[2] = new ShrubberyCreationForm();

}

Intern::Intern(Intern const &c)
{
	*this = c;
}

Intern &Intern::operator=(Intern const &c)
{
	(void)c;
	return (*this);
}

Intern::~Intern()
{
	delete _sample[0];
	delete _sample[1];
	delete _sample[2];
}

Form *Intern::makeForm(std::string name, std::string target)
{
	try
	{
		int i = 0;
		while (i < 3)
		{
			if (_sample[i]->getStrName() == name)
			{
				std::cout << "intern creates " << _sample[i]->getStrName() << std::endl;
				return (_sample[i]->clone(target));
			}
			i++;
		}
		throw FormDontExist();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (NULL);
}

const char *Intern::FormDontExist::what() const throw()
{
	return ("Form doesnt exist.");
}
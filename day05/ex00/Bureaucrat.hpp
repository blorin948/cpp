#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	public :

	Bureaucrat(std::string n, int gr);
	Bureaucrat();
	Bureaucrat(Bureaucrat const &c);
	Bureaucrat &operator=(Bureaucrat const &c);
	~Bureaucrat();
	std::string getName(void) const;
	int getGrade(void) const;
	void incr(void);
	void decr(void);

	private :

	std::string const _name;
	int _grade;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &c);

#endif
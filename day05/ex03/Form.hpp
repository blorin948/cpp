#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	public :

	Form(std::string n, int gradSign, int gradExec);
	Form(Form const &c);
	Form &operator=(Form const &c);
	virtual ~Form();
	int getGradeExec(void) const;
	int getGradeSign(void) const;
	std::string getName(void) const;
	bool isSigned(void) const;
	void beSigned(Bureaucrat const b);
	void setTarget(std::string target);
	std::string getTarget(void) const;
	virtual void execute(Bureaucrat const & executor)const = 0;
	void checkGrade(Bureaucrat const &exec) const;
	void setStrName(std::string str);
	std::string getStrName(void) const;
	virtual Form *clone(std::string target) = 0;
	Form();

	private :

	std::string const _name;
	int const _gradSign;
	int const _gradExec;
	bool _sign;
	std::string _target;
	std::string _strName;

};

std::ostream &operator<<(std::ostream &out, Form const &c);

#endif
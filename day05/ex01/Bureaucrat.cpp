#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string n, int gr) : _name(n), _grade(gr)
{

	if (gr < 1)
		throw GradeTooHighException();
	if (gr > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &c)
{
	*this = c;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &c)
{
	_grade = c._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incr(void)
{

	if (this->_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	_grade -= 1;
}

void Bureaucrat::decr(void)
{
	if (this->_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	_grade += 1;
}

void Bureaucrat::signForm(Form &c)
{
	try
	{
		c.beSigned(*this);
		std::cout << this->_name << " sign " << c.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " can't sign " << c.getName()
		<< " because " << e.what() << '\n';
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &c)
{
	out << c.getName() << ", bureaucrat grade " << c.getGrade() << std::endl;
	return (out);
}


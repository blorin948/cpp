#include "Form.hpp"

Form::Form(std::string n, int gradSign, int gradExec) : _name(n), _gradSign(gradSign), _gradExec(gradExec)
{
	_sign = false;

		if (gradSign < 1 || gradExec < 1)
			throw GradeTooHighException();
		if (gradSign > 150 || gradExec > 150)
			throw GradeTooLowException();

}

Form::Form(void) : _gradSign(1), _gradExec(1)
{
	(void)_name;
	(void)_sign;
}

Form::Form(Form const &c) : _name(c.getName()), _gradSign(c.getGradeSign()), _gradExec(c.getGradeExec())
{
	_sign = c._sign;
	*this = c;
}

void Form::setStrName(std::string str)
{
	_strName = str;
}

Form &Form::operator=(Form const &c)
{
	this->_sign = c._sign;
	return (*this);
}

Form::~Form()
{

}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

const char *Form::NotSignedException::what() const throw()
{
	return ("Form is not signed you dumb ass.");
}

std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getGradeSign(void) const
{
	return (this->_gradSign);
}

int Form::getGradeExec(void) const
{
	return (this->_gradExec);
}

bool Form::isSigned(void) const
{
	return (_sign);
}

void Form::beSigned(Bureaucrat const b)
{
	if (b.getGrade() < this->_gradSign)
		_sign = true;
	else
		throw GradeTooLowException();
}

void Form::setTarget(std::string target)
{
	this->_target = target;
}

std::string Form::getTarget(void) const
{
	return (this->_target);
}

void Form::checkGrade(Bureaucrat const &exec) const
{
	if (this->_sign == false)
		throw NotSignedException();
	if (this->_gradExec < exec.getGrade())
		throw GradeTooLowException();
}

std::string Form::getStrName(void) const
{
	return (_strName);
}

std::ostream &operator<<(std::ostream &out, Form const &c)
{
	std::string str = "Form " + c.getName() + " have a sign grade of ";
	out << str << c.getGradeSign() << " and exec grade of " << c.getGradeExec();
	if (c.isSigned())
		out << " and is signed";
	else
	{
		out << " and is not signed";
	}
	out << std::endl;
	return (out);
}
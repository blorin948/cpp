#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	setTarget("unknown");
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &c)
{
	*this = c;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &c)
{
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkGrade(executor);
	std::ofstream out(getTarget() + "_shrubber");
	out << "            __     \n";
	out << "            /\\     \n";
	out << "           /  \\     \n";
	out << "          /    \\     \n";
	out << "         /      \\     \n";
	out << "        /        \\     \n";
	out << "       /          \\     \n";
	out << "      /            \\     \n";
	out << "     /              \\    \n";
	out << "    /                \\   \n";
	out << "   /                  \\  \n";
	out << "   _____          ______  \n";
	out << "       |          |       \n";
	out << "       |          |       \n";
	out << "       |          |       \n";
	out << "       |          |       \n";
	out << "_________________________";
	out.close();
}

#include "Peon.hpp"

Peon::Peon(std::string n) : Victime(n)
{
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(void)
{

}

Peon::Peon(Peon const &c)
{
	*this = c;
}

Peon &Peon::operator=(Peon const &c)
{
	this->_name = c._name;
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed into a pink pony!" << std::endl;
}
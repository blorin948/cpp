#include "Paysan.hpp"

Paysan::Paysan(std::string n) : Victime(n)
{
	std::cout << "Oui messire ?" << std::endl;
}

Paysan::Paysan(void)
{

}

Paysan::Paysan(Paysan const &c)
{
	*this = c;
}

Paysan &Paysan::operator=(Paysan const &c)
{
	this->_name = c._name;
	return (*this);
}

Paysan::~Paysan()
{
	std::cout << "Travail terminer !" << std::endl;
}

void Paysan::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed into a big sprotch" << std::endl;
}
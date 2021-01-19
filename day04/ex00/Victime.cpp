#include "Victime.hpp"

Victime::Victime(std::string n) : _name(n)
{
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victime::Victime(void)
{

}

Victime::Victime(Victime const &c)
{
	*this = c;
}

Victime &Victime::operator=(Victime const &c)
{
	this->_name = c._name;
	return (*this);
}

Victime::~Victime()
{
	std::cout <<"The victim " << this->_name << " died for no apparent reasons !" << std::endl;
}

std::string Victime::annonce(void) const
{
	std::string str = "I am ";
	str = str + this->_name + " and I like otters!" + "\n";
	return (str);
}

void Victime::getPolymorphed(void) const
{
	std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, Victime const &c)
{
	out << c.annonce();
	return (out);
}
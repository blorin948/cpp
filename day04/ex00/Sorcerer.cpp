#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : _type(t), _name(n)
{
	std::cout << this->_name << ", " << this->_type << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(void)
{
	
}

Sorcerer::Sorcerer(Sorcerer const &c)
{
	*this = c;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &c)
{
	this->_name = c._name;
	this->_type = c._type;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_type << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph(Victime const &target) const
{
	target.getPolymorphed();
}

std::string Sorcerer::annonce(void) const
{
	std::string str = "I am ";
	str = str + this->_name + ", " + this->_type + ", and i like ponies!" + "\n";
	return (str);
}

std::ostream &operator<<(std::ostream& out, Sorcerer const &c)
{
	out << c.annonce();
	return (out);
}
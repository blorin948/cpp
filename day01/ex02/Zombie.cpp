#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _type(type), _name(name)
{
	std::cout << "creation du zombie " << this->_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destruction du zombie " << this->_name << std::endl;
}

void Zombie::advert(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnsss" << std::endl;
}

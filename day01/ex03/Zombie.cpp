#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
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

Zombie::Zombie(void)
{

}

void Zombie::setZombieType(std::string t)
{
	this->_type = t;
}

void Zombie::setZombieName(std::string n)
{
	this->_name = n;
}
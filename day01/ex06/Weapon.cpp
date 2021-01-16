#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name)
{

}

Weapon::Weapon(void)
{

}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType(void)
{
	const std::string& refType = this->type;
	return (refType);
}

void Weapon::setType(std::string t)
{
	this->type = t;
}
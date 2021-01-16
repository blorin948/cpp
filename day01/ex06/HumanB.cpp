#include "HumanB.hpp"

HumanB::HumanB(std::string n) : _name(n)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weap = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->getType() << std::endl;
}

std::string HumanB::getType(void)
{
	return (this->_weap->getType());
}

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap) : _weap(weap),  _name(name)
{

}

HumanA::~HumanA()
{

}

std::string HumanA::getType(Weapon weap)
{
	return (weap.getType());
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->getType(_weap) << std::endl;
}
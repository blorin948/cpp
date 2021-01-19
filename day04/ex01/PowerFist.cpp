#include "PowerFist.hpp"

PowerFist::PowerFist() : Aweapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &c)
{
	*this = c;
}

PowerFist &PowerFist::operator=(PowerFist const &c)
{
	this->_apcost = c._apcost;
	this->_dmg = c._dmg;
	this->_name = c._name;
	return (*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM ! *" << std::endl;
}
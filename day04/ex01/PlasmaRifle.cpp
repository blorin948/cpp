#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : Aweapon("Plasme Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &c)
{
	*this = c;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &c)
{
	this->_apcost = c._apcost;
	this->_dmg = c._dmg;
	this->_name = c._name;
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
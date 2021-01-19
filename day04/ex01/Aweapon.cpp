#include "Aweapon.hpp"

Aweapon::Aweapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _dmg(damage)
{

}

Aweapon::Aweapon(void)
{

}

Aweapon::Aweapon(Aweapon const &c)
{
	*this = c;
}

Aweapon &Aweapon::operator=(Aweapon const &c)
{
	this->_apcost = c._apcost;
	this->_dmg = c._dmg;
	this->_name = c._name;
	return (*this);
}

Aweapon::~Aweapon()
{

}

int	Aweapon::getAPCost(void) const
{
	return (_apcost);
}

int Aweapon::getDamage() const
{
	return (_dmg);
}

std::string Aweapon::getName(void) const
{
	return (this->_name);
}
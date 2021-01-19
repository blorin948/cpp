#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &c)
{
	*this = c;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &c)
{
	this->_hp = c.getHP();
	this->_type = c.getType();
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int dmg)
{
	dmg = dmg - 3;
	if (dmg < 0)
		return ;
	this->_hp = _hp - dmg;
	if (_hp < 0)
		_hp = 0;
}

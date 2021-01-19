#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &c)
{
	*this = c;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &c)
{
	this->_hp = c.getHP();
	this->_type = c.getType();
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int dmg)
{
	dmg = dmg - 3;
	if (dmg < 0)
		return ;
	this->_hp = _hp - dmg;
	if (_hp < 0)
		_hp = 0;
}

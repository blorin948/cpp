#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _weap(NULL), _ap(40)
{

}

Character::Character(void)
{

}

Character::Character(Character const &c)
{
	*this = c;
}

Character &Character::operator=(Character const &c)
{
	this->_name = c._name;
	this->_weap = c._weap;
	_ap = c._ap;
	return (*this);
}

Character::~Character()
{

}

void Character::recoverAP(void)
{
	this->_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(Aweapon *w)
{
	_weap = w;
}

void Character::attack(Enemy* e)
{
	if (_ap < _weap->getAPCost())
	{
		std::cout << "Not enough ap to attack" << std::endl;
		return ;
	}
	if (_weap == NULL)
	{
		std::cout << "No weapon equipped, nice try." << std::endl;
		return ;
	}
	std::cout << this->_name << " attaque " << e->getType() << " with a " << _weap->getName() << std::endl;
	_weap->attack();
	e->takeDamage(_weap->getDamage());
	if (e->getHP() == 0)
		delete e;
	_ap -= _weap->getAPCost();
}

std::string Character::getWeapName(void) const
{
	return (this->_weap->getName());
}

int Character::getAp(void) const
{
	return (this->_ap);
}

int Character::isArmed(void) const
{
	if (_weap == NULL)
		return (0);
	else 
		return (1);
}

std::string Character::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, Character const &c)
{
	if (c.isArmed() == 0)
		out << c.getName() << " has " << c.getAp() << " and is unarmed" << std::endl;
	else 
		out << c.getName() << " has " << c.getAp() << " AP and carries a " << c.getWeapName() << std::endl;
	return (out);
}
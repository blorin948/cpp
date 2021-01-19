#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(void)
{

}

Enemy::Enemy(Enemy const &c)
{
	*this = c;
}

Enemy &Enemy::operator=(Enemy const &c)
{
	this->_hp = c.getHP();
	this->_type = c.getType();
	return (*this);
}

Enemy::~Enemy()
{

}

int Enemy::getHP(void) const
{
	return (this->_hp);
}

std::string Enemy::getType(void) const
{
	return (this->_type);
}


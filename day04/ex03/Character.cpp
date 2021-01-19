#include "Character.hpp"

Character::Character(std::string const &n) : _name(n)
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
	return (*this);
}

Character::~Character()
{

}

std::string const & Character::getName() const
{
	return (this->_name);
}
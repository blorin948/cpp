#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n) : ClapTrap(n),  NinjaTrap(n), FragTrap(n)
{
	ClapTrap::setStats(100, 100, 120, 120, 1, 20, 60, 5);
	std::cout << "SuperTrap constructor of " << this->_name << " called" << std::endl;
}

SuperTrap::SuperTrap(void)
{

}

SuperTrap::SuperTrap(SuperTrap const &c)
{
	*this = c;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_maxhp = c._maxhp;
	this->_nrg = c._nrg;
	this->_maxnrg = c._maxnrg;
	this->_lvl = c._lvl;
	this->_meleedmg = c._meleedmg;
	this->_rangedmg = c._rangedmg;
	this->_armor = c._armor;
	return (*this);
}

SuperTrap::~SuperTrap()
{
std::cout << "SuperTrap destructor of " << this->_name << " called" << std::endl;
}
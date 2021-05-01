#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	this->setStats(60, 60, 120, 120, 1, 5, 60, 0);
	std::cout << "NinjaTrap constructor of " << this->_name << " called" << std::endl;
}

NinjaTrap::NinjaTrap(void)
{

}

NinjaTrap::NinjaTrap(NinjaTrap const &c)
{
	*this = c;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &c)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor of " << this->_name << " called" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &c)
{
	(void)c;
	std::cout << "ClapTrap ninjaShoebox of " << this->_name << " called" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &c)
{
	(void)c;
	std::cout << "FragTrap ninjaShoebox of " << this->_name << " called" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &c)
{
	(void)c;
	std::cout << "ScavTrap ninjaShoebox of " << this->_name << " called" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &c)
{
	(void)c;
	std::cout << "NinjaTrap ninjaShoebox of " << this->_name << " called" << std::endl;
}
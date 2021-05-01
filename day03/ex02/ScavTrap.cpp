#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	setStats(100, 100, 50, 50, 1, 15, 20, 3);
	std::cout << "ScavTrap constructor of " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &c)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = c;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	setStats(100, 100, 50, 50, 1, 15, 20, 3);
}

ScavTrap &ScavTrap::operator=(ScavTrap const &c)
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

void ScavTrap::challengeNewcomer(void)
{
	int i = random_nbr();
	std::string str[4] = {"Met tes chaussures a l'envers une journee", "Prend un laxatif",
	"Chante au clair de lune", "Trouve ton propre challenge j'suis pas ta mere"};
	std::cout << str[i] << std::endl;
}

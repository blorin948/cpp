#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	setStats(10, 10, 10 ,10 ,1, 10, 10, 2);
	std::cout << "CLapTrap constructor of " << this->_name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor of " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(void)
{

}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	*this = c;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &c)
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

void ClapTrap::setStats(int hp, int mhp, int nrg, int mnrg, int lvl, int rang, int melee, int armor)
{
	this->_hp = hp;
	this->_maxhp = mhp;
	this->_nrg = nrg;
	this->_maxnrg = mnrg;
	this->_lvl = lvl;
	this->_meleedmg = melee;
	this->_rangedmg = rang;
	this->_armor = armor;
}

void ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout <<  this->_name << " attaque " << target << " avec une attaque a distance, causant " << this->_rangedmg << " de degats" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->_name << " attaque " << target << " avec une attaque a au corps a corps, causant " << this->_meleedmg << " de degats" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_armor)
	{
		std::cout << "AH ! Meme pas mal." << std::endl;
		return ;
	}
	amount = amount - this->_armor;
	if (amount > 0)
	{
		this->_hp = _hp - amount;
		if (this->_hp < 0)
			this->_hp = 0;
		std::cout << this->_name << " a pris " << amount << " degats";
		if (this->_hp == 0)
			std::cout << ", maintenant il est mort, BRAVO !" << std::endl;
		else
			std::cout << ", il lui reste " << this->_hp << " hp." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " boit une potion qui lui rend " << amount << " hp";
	this->_hp = this->_hp + amount;
	if (this->_hp > this->_maxhp)
		this->_hp = this->_maxhp;
	std::cout << " il a maintenant " << this->_hp << " hp." << std::endl;
}

int ClapTrap::random_nbr()
{
	int i = 0;
	static int nb = 0;
	srand(time(0) + nb);
	i = rand() % 5;
	nb = nb + 10;
	return (i);
}

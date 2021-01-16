#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string n) : _name(n), _hp(100), _maxhp(100), _nrg(50)
, _maxnrg(50), _lvl(1), _meleedmg(20), _rangedmg(15), _armor(3)
{
	std::cout << "ScavTrap constructor of " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << this->_name << " called" << std::endl;
}

ScavTrap::ScavTrap(void) : _hp(100), _maxhp(100), _nrg(50)
, _maxnrg(50), _lvl(1), _meleedmg(20), _rangedmg(15), _armor(3)
{

}

ScavTrap::ScavTrap(ScavTrap const &c)
{
	*this = c;
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

void ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "ScavTrap " << this->_name << " attaque " << target << " avec une attaque a distance, causant " << this->_rangedmg << " de degats" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "ScavTrap " << this->_name << " attaque " << target << " avec une attaque a au corps a corps, causant " << this->_meleedmg << " de degats" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " boit une potion qui lui rend " << amount << " hp";
	this->_hp = this->_hp + amount;
	if (this->_hp > this->_maxhp)
		this->_hp = _maxhp;
	std::cout << " il a maintenant " << this->_hp << " hp." << std::endl;
}

int ScavTrap::random_nbr()
{
	int i = 0;
	static int nb = 0;
	srand(time(0) + nb);
	i = rand() % 3;
	nb = nb + 10;
	return (i);
}

void ScavTrap::challengeNewcomer(void)
{
	int i = random_nbr();
	std::string str[4] = {"Met tes chaussures a l'envers une journee", "Prend un laxatif",
	"Chante au clair de lune", "Trouve ton propre challenge j'suis pas ta mere"};
	std::cout << str[i] << std::endl;
}
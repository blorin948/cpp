#include "FragTrap.hpp"

FragTrap::FragTrap(std::string n) : _name(n), _hp(100), _maxhp(100), _nrg(100)
, _maxnrg(100), _lvl(1), _meleedmg(30), _rangedmg(20), _armor(5)
{
	std::cout << "FragTrap constructor of " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(void) : _hp(100), _maxhp(100), _nrg(100)
, _maxnrg(100), _lvl(1), _meleedmg(30), _rangedmg(20), _armor(5)
{

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << this->_name << " called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &c)
{
	*this = c;
}

FragTrap &FragTrap::operator=(FragTrap const &c)
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

void FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FragTrap " << this->_name << " attaque " << target << " avec une attaque a distance, causant " << this->_rangedmg << " de degats" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FragTrap " << this->_name << " attaque " << target << " avec une attaque a au corps a corps, causant " << this->_meleedmg << " de degats" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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
	else
		std::cout << "AH ! Meme pas mal." << std::endl;
	
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " boit une potion qui lui rend " << amount << " hp";
	this->_hp = this->_hp + amount;
	if (this->_hp > 100)
		this->_hp = 100;
	std::cout << " il a maintenant " << this->_hp << " hp." << std::endl;
}

int FragTrap::random_nbr()
{
	int i = 0;
	static int nb = 0;
	srand(time(0) + nb);
	i = rand() % 5;
	nb = nb + 10;
	return (i);
}

void FragTrap::nuclear_bomb(std::string const &target) const
{
	std::cout << this->_name << " lance une super attaque nucleaire pour ouatmillion de degats sur " << target << std::endl; 
}

void FragTrap::pichenette(std::string const &target) const
{
	std::cout << this->_name << " fait une pichenette sur " << target << " pour 2 de degats." << std::endl; 
}

void FragTrap::get_nrg(std::string const &target)
{
	std::cout << target << " regarde avec envie " << this->_name << " boire une potion d'energie et regagner " << 100 - this->_nrg << " point d'energie !" << std::endl;
	this->_nrg = 100;
}

void FragTrap::pikachu(std::string const &target) const
{
	std::cout << this->_name << " invoque un pikachu sauvage et lance Attaque eclair sur " << target << " pour 40 point de degats !" << std::endl;
}

void FragTrap::piano(std::string const &target) const
{
	std::cout << target << " regarde betement un piano apparaitre au dessus de sa tete lancer par " << this->_name << ", il prend 87 point de degats !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int i = this->random_nbr();
	if (this->_nrg < 25)
	{
		std::cout << "Pas assez d'energie, peut etre une prochaine fois !" << std::endl;
		return ;
	}
	if (i == 0)
		nuclear_bomb(target);
	if (i == 1)
		pichenette(target);
	if (i == 2)
		get_nrg(target);
	if (i == 3)
		pikachu(target);
	if (i == 4)
		piano(target);
	this-> _nrg = _nrg - 25;
}
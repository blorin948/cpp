#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

	public :

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &c);
	ClapTrap& operator=(ClapTrap const &c);
	~ClapTrap();
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected :
	void setStats(int hp, int mhp, int nrg, int mnrg, int lvl, int rang, int melee, int armor);
	int random_nbr();
	int _hp;
	int _maxhp;
	int _nrg;
	int _maxnrg;
	int _lvl;
	std::string _name;
	int _meleedmg;
	int _rangedmg;
	int _armor;
};

#endif
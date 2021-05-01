#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{

	public :

	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &c);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const &c);
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);

	private :

	int random_nbr();
	int _hp;
	int _maxhp;
	int _nrg;
	int _maxnrg;
	int _lvl;
	std::string _name;
	int _meleedmg;
	int _rangedmg;
	unsigned int _armor;
};

#endif
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

class FragTrap
{

	public :

	FragTrap();
	FragTrap(std::string n);
	FragTrap(FragTrap const &c);
	~FragTrap();
	FragTrap& operator=(FragTrap const &c);
	void rangedAttack(std::string const &target) const;
	void meleeAttack(std::string const &target) const;
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	private :

	int random_nbr();
	void nuclear_bomb(std::string const &target) const;
	void pichenette(std::string const &target) const;
	void get_nrg(std::string const &target);
	void pikachu(std::string const &target) const;
	void piano(std::string const &target) const;
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
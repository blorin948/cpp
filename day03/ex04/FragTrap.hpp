#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public :

	FragTrap(void);
	FragTrap(std::string n);
	FragTrap(FragTrap const &c);
	~FragTrap();
	FragTrap& operator=(FragTrap const &c);
	void vaulthunter_dot_exe(std::string const & target);

	private :

	void nuclear_bomb(std::string const &target) const;
	void pichenette(std::string const &target) const;
	void get_nrg(std::string const &target);
	void pikachu(std::string const &target) const;
	void piano(std::string const &target) const;

};

#endif
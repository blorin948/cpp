#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public :

	ScavTrap(void);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &c);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const &c);
	void challengeNewcomer(void);

	private :

};

#endif
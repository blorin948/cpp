#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

	public :

	NinjaTrap(std::string n);
	NinjaTrap();
	NinjaTrap(NinjaTrap const &c);
	NinjaTrap& operator=(NinjaTrap const &c);
	~NinjaTrap();
	void ninjaShoebox(FragTrap const &c);
	void ninjaShoebox(ScavTrap const &c);
	void ninjaShoebox(NinjaTrap const &c);

	private :

};

#endif
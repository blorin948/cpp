#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap :  public NinjaTrap , public FragTrap
{

	public :

	SuperTrap(std::string n);
	SuperTrap();
	SuperTrap(SuperTrap const &c);
	SuperTrap& operator=(SuperTrap const &c);
	~SuperTrap();

	private :

};

#endif
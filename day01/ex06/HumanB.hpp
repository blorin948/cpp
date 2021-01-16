#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{

	public :

	HumanB(std::string n);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack(void);
	std::string getType(void);

	private :

	std::string _name;
	Weapon *_weap;

};

#endif
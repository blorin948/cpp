#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

	public :
	HumanA(std::string name, Weapon& weap);
	~HumanA();
	void attack();

	private :

	std::string getType(Weapon weap);
	Weapon& _weap;
	std::string _name;

};

#endif
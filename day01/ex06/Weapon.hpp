#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{

	public :

	Weapon(std::string name);
	Weapon(void);
	~Weapon();
	const std::string& getType(void);
	void setType(std::string t);

	private :

	std::string type;


};

#endif
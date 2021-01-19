#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class Aweapon
{

	public :

	Aweapon(std::string const & name, int apcost, int damage);
	Aweapon();
	Aweapon(Aweapon const &c);
	Aweapon &operator=(Aweapon const &c);
	virtual ~Aweapon();
	int getAPCost() const;
	int getDamage() const;
	std::string getName() const;
	virtual void attack() const = 0;

	protected :

	int _apcost;
	int _dmg;
	std::string _name;
};

#endif
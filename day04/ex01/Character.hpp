#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"
#include "Aweapon.hpp"

class Character
{

	public :

	Character(std::string const &name);
	Character();
	Character(Character const &c);
	Character &operator=(Character const &c);
	~Character();
	void recoverAP();
	void equip(Aweapon* w);
	void attack(Enemy* e);
	std::string getName() const;
	int getAp(void) const;
	std::string getWeapName(void) const;
	int isArmed(void) const;

	private :

	std::string _name;
	Aweapon *_weap;
	int _ap;

};

std::ostream &operator<<(std::ostream &out, Character const &c);

#endif
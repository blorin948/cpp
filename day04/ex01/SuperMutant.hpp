#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

	public :

	SuperMutant();
	SuperMutant(SuperMutant const &c);
	SuperMutant &operator=(SuperMutant const &c);
	virtual ~SuperMutant();
	void takeDamage(int dmg);

	private :

};

#endif
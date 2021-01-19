#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public :

	RadScorpion();
	RadScorpion(RadScorpion const &c);
	RadScorpion &operator=(RadScorpion const &c);
	virtual ~RadScorpion();
	void takeDamage(int dmg);

	private :

};

#endif
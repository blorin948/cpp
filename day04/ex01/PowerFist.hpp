#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include <string>
#include "Aweapon.hpp"

class PowerFist : public Aweapon
{

	public :

	PowerFist();
	PowerFist(PowerFist const &c);
	PowerFist &operator=(PowerFist const &c);
	virtual ~PowerFist();
	void attack(void) const;

	private :

};

#endif
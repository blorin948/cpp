#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include <string>
#include "Aweapon.hpp"

class PlasmaRifle : public Aweapon
{

	public :

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &c);
	PlasmaRifle &operator=(PlasmaRifle const &c);
	virtual ~PlasmaRifle();
	void attack(void) const;

	private :

};

#endif
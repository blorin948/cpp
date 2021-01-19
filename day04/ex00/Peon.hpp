#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include <string>
#include "Victime.hpp"

class Peon : public Victime
{

	public :

	Peon(std::string n);
	Peon();
	Peon(Peon const &c);
	Peon &operator=(Peon const &c);
	~Peon();
	void getPolymorphed(void) const;

	private :

};

#endif
#ifndef PAYSAN_HPP
# define PAYSAN_HPP

#include <iostream>
#include <string>
#include "Victime.hpp"

class Paysan : public Victime
{

	public :

	Paysan(std::string name);
	Paysan();
	Paysan(Paysan const &c);
	Paysan &operator=(Paysan const &c);
	~Paysan();
	void getPolymorphed(void) const;

	private :

};

#endif
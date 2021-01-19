#ifndef VICTIME_HPP
# define VICTIME_HPP

#include <iostream>
#include <string>

class Victime
{

	public :

	Victime(std::string n);
	Victime();
	Victime(Victime const &c);
	Victime &operator=(Victime const &c);
	~Victime();
	std::string annonce(void) const;
	virtual void getPolymorphed() const;

	protected :

	std::string _name;
};

std::ostream& operator<<(std::ostream& out, Victime const &c);

#endif
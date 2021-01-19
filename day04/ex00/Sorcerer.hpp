#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victime.hpp"

class Sorcerer
{

	public :

	Sorcerer(std::string n, std::string t);
	Sorcerer(Sorcerer const &c);
	Sorcerer &operator=(Sorcerer const &c);
	~Sorcerer();
	std::string annonce(void) const;
	void polymorph(Victime const &target) const;

	private :

	Sorcerer();
	std::string _type;
	std::string _name;

};

std::ostream& operator<<(std::ostream& out, Sorcerer const &c);

#endif
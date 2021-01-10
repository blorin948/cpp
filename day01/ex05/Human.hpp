#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include "Brain.hpp"

class Human
{
	public :

	Human();
	~Human();
	std::string identifier() const;
	const Brain &getBrain();

	private :

	const Brain _brain;

};

#endif
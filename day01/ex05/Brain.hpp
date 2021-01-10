#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <sstream>
#include <string>

class Brain
{
	public :

	Brain();
	~Brain();
	std::string identifier() const;

	private :

	std::stringstream _id;
	std::string _strId;
	void setAdress();

};

#endif
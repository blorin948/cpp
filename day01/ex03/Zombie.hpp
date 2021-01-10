#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public :

	Zombie(std::string name, std::string type);
	Zombie();
	~Zombie();
	void advert() const;
	void setZombieType(std::string t);
	void setZombieName(std::string n);

	private :

	std::string _type;
	std::string _name;


};

#endif
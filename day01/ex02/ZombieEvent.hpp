#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
#include <iostream>
#include "Zombie.hpp"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
class ZombieEvent
{
	public :

	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string t);
	Zombie *newZombie (std::string name);
	Zombie *randomChump();

	private :

	std::string _type;

};

#endif
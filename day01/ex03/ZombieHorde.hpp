#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Zombie.hpp"

class ZombieHorde
{
	public :

	ZombieHorde(int n);
	~ZombieHorde();
	void annonce();

	private :

	std::string _randomName();
	std::string _type;
	Zombie *_horde;
	int _nbr;

};

#endif
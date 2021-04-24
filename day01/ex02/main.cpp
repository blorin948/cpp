#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main()
{
	Zombie *x;
	Zombie *z;
	Zombie *k;
	Zombie stack("francis", "monstre");

	ZombieEvent s;
	s.setZombieType("loup");
	x = s.newZombie("Salomon");
	s.setZombieType("zogzog");
	z = s.randomChump();
	k = s.randomChump();
	z->advert();
	x->advert();
	k->advert();
	stack.advert();

	delete z;
	delete x;
	delete k;
}
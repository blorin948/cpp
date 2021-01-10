#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) :_nbr(n)
{
	int i = 0;

	this->_horde = new Zombie[n];
	while (i < n)
	{
		this->_horde[i].setZombieType("CREEPER");
		this->_horde[i].setZombieName(_randomName());
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _horde;
}

std::string ZombieHorde::_randomName(void)
{
	static int i = 0;
	std::string names[10] = {"Richard", "Valentin", "Guigui", "Conan"
	, "Gege", "Sir Balzac de Chateaubrillant", "Patoche", "Lea", "Brutus", "Cafard"};
	int nb = 0;
	srand(time(0) + i);
	nb = rand() % 10;
	i = i + 8;
	return (names[nb]);
}

void ZombieHorde::annonce(void)
{
	int i = 0;
	while (i < this->_nbr)
	{
		_horde[i].advert();
		i++;
	}
}
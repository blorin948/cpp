#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{

}

ZombieEvent::~ZombieEvent(void)
{
	
}

void ZombieEvent::setZombieType(std::string t)
{
	this->_type = t;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name, _type);
	return (newZombie);
}

Zombie *ZombieEvent::randomChump()
{
	static int i = 0;
	std::string names[10] = {"Richard", "Valentin", "Guigui", "Conan"
	, "Gege", "Sir Balzac de Chateaubrillant", "Patoche", "Lea", "Brutus", "Cafard"};
	int nb = 0;
	srand(time(0) + i);
	nb = rand() % 10;
	i = i + 1;
	return (this->newZombie(names[nb]));

}
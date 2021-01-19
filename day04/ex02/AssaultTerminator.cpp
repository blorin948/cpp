#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &c)
{
	*this = c;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &c)
{
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attaque with chainfists *" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::battleCry(void) const
{
	std::cout <<  "This code is unclean. Purify it !" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}
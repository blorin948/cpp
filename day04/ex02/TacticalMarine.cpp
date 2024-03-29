#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &c)
{
	*this = c;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &c)
{
	(void)c;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

void TacticalMarine::battleCry(void) const
{
	std::cout <<  "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	return (new TacticalMarine());
}
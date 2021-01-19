#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public :

	TacticalMarine();
	TacticalMarine(TacticalMarine const &c);
	TacticalMarine &operator=(TacticalMarine const &c);
	~TacticalMarine();
	void battleCry(void) const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine *clone(void) const;


	private :

};

#endif
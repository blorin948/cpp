#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public :

	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &c);
	AssaultTerminator &operator=(AssaultTerminator const &c);
	~AssaultTerminator();
	void battleCry(void) const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine *clone() const;

	private :

};

#endif
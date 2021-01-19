#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <string>
#include "Isquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{

	public :

	Squad();
	Squad(Squad const &c);
	Squad &operator=(Squad const &c);
	~Squad();
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine* m);
	void deleteAll(void);

	private :

	int isArmy(ISpaceMarine *m);
	int count;
	ISpaceMarine **_army;

};

#endif
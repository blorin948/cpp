#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Amateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{

	public :

	Character(std::string const &n);
	Character();
	Character(Character const &c);
	Character &operator=(Character const &c);
	~Character();
	std::string const & getName() const;
	void equip(Amateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	private :

	std::string _name;

};

#endif
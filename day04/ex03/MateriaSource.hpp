#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "Amateria.hpp"
#include <iostream>
#include <string>


class MateriaSource : public IMateriaSource
{

	public :

	MateriaSource();
	MateriaSource(MateriaSource const &c);
	MateriaSource &operator=(MateriaSource const &c);
	~MateriaSource();
	void learnMateria(Amateria *c);
	Amateria* createMateria(std::string const & type);

	private :

	int _count;
	Amateria **_save;

};

#endif
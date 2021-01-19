#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _count(0)
{
	_save = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &c)
{
	*this = c;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &c)
{
	return (*this);
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(Amateria *c)
{
	if (this->_count < 4)
	{
		_save[_count] = c;
		_count++;
	}
}

Amateria *MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < this->_count)
	{
		if (_save[i]->getType() == type)
		{
			return (_save[i]->clone());
		}
		i++;
	}
	return (0);
}
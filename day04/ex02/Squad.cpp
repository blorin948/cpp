#include "Squad.hpp"



Squad::Squad(void) : _army(NULL)
{
	//this->_army = new ISpaceMarine*[0];
}

Squad::Squad(Squad const &c)
{
	*this = c;
}

Squad &Squad::operator=(Squad const &c)
{
	int i = 0;
	deleteAll();
	count = 0;
	while (i < c.getCount())
	{		
		this->push((c.getUnit(i))->clone());
		i++;
	}
	return (*this);
}

void Squad::deleteAll(void)
{
	int i = 0;
	while (_army && _army[i])
	{
		delete _army[i];
		i++;
	}
	if (_army)
		delete []_army;
}

Squad::~Squad()
{
	deleteAll();
}

int Squad::getCount(void) const
{
	return (count);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i < count)
		return (this->_army[i]);
	return (NULL);
}

int Squad::isArmy(ISpaceMarine *m)
{
	int i = 0;

	while (_army && _army[i])
	{
		if (_army[i] == m)
			return (1);
		i++;
	}
	return (0);
}

int Squad::push(ISpaceMarine *m)
{
	int i = 0;
	if (m == NULL)
		return (0);
	if (isArmy(m))
		return (0);
	ISpaceMarine **tmp = new ISpaceMarine*[count + 1];
	while (_army && _army[i])
	{
		tmp[i] = _army[i];
		i++;
	}
	tmp[i] = m;
	if (_army)
		delete []this->_army;
	this->_army = tmp;
	this->count++;
	return (1);
}
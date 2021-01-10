#include "Brain.hpp"

Brain::Brain()
{
	setAdress();
}

Brain::~Brain()
{

}

void Brain::setAdress(void)
{
	std::stringstream buf;

	buf << this;
	buf >> _strId;	
}

std::string Brain::identifier(void) const
{
	return (_strId);
}
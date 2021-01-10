#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

std::string Human::identifier() const
{
	return (this->_brain.identifier());

}

const Brain &Human::getBrain()
{
	return (this->_brain);
}
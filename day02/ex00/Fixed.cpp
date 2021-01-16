#include "Fixed.hpp"

int const Fixed::nbrbit = 8;

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "default destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &c)
{
	*this = c;
	std::cout << "copy constructor called" << std::endl;

}

Fixed &Fixed::operator=(Fixed const &c)
{
	this->_value = c.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

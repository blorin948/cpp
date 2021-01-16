#include "Fixed.hpp"

const int Fixed::_rawbits = 8;

Fixed::Fixed(void)
{

}

Fixed::~Fixed()
{

}

Fixed::Fixed(Fixed const &c)
{
	*this = c;
}

Fixed::Fixed(const int value)
{
    this->_value = value << _rawbits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	//this->_value = roundf(value);
	this->_value = roundf(value * (1 << _rawbits));
}

Fixed &Fixed::operator=(Fixed const &c)
{
	this->_value = c.getRawBits();
	return (*this);

}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)(this->_value) / (1 << _rawbits));
}

int Fixed::toInt(void) const
{
	return ((int)_value >> _rawbits);
}

std::ostream &operator<<(std::ostream& o, Fixed const &c)
{
	o << c.toFloat();
	return (o);
}

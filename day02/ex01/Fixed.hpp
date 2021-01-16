#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <math.h>

class Fixed
{

	public :

	Fixed();
	Fixed(Fixed const &c);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed &operator=(Fixed const &c);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;


	private :

	int _value;
	static const int _rawbits;
};

std::ostream& operator<<(std::ostream& o, Fixed const &c);

#endif
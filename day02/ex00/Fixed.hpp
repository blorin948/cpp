#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

	public :

	Fixed();
	Fixed(Fixed const &c);
	~Fixed();
	Fixed& operator=(Fixed const &c);
	int getRawBits(void) const;
	void setRawBits(int const raw);

	private :

	int _value;
	static const int nbrbit;

};

#endif
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string n) : ClapTrap(n),  NinjaTrap(n), FragTrap(n)
{
	ClapTrap::setStats(100, 100, 120, 120, 1, 20, 60, 5);
	std::cout << "SuperTrap constructor of " << this->_name << " called" << std::endl;
}

SuperTrap::SuperTrap(void)
{

}

SuperTrap::SuperTrap(SuperTrap const &c)
{
	*this = c;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &c)
{
	return (*this);
}

SuperTrap::~SuperTrap()
{
std::cout << "SuperTrap destructor of " << this->_name << " called" << std::endl;
}
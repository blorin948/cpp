#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main()
{

	SuperTrap boby("scharzy");
	FragTrap ok("S");
	ScavTrap a("a");

	a.meleeAttack("slt");
	ok.meleeAttack("slt");
	boby.meleeAttack("e");
}
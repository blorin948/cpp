#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{


	NinjaTrap ok("joseph");
	FragTrap slt("bebe");
	ScavTrap cal("sisi");
	ok.ninjaShoebox(ok);
	ok.ninjaShoebox(cal);
	ok.ninjaShoebox(slt);
}
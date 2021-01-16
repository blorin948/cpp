#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{


	FragTrap bob2("joseph");
	FragTrap ok(bob2);

	bob2.takeDamage(50);
	ok.takeDamage(50);
/*bob2.meleeAttack("Patrick");
	bob2.rangedAttack("Clark");
	bob2.takeDamage(50);
	ok = bob2;
	FragTrap stef(bob2);
	stef.takeDamage(50);
//	ok.takeDamage(50);	bob2.beRepaired(10);
	ScavTrap rob("bebe");
	ClapTrap clap("salut");

	clap.takeDamage(10);
	ScavTrap ge;*/
}
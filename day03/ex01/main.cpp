#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap bob("joseph");
	bob.meleeAttack("Patrick");
	bob.rangedAttack("Clark");
	bob.takeDamage(50);
	bob.beRepaired(10);
	bob.beRepaired(100);
	bob.takeDamage(500);
	bob.takeDamage(2);

	bob.challengeNewcomer();
	bob.challengeNewcomer();
bob.challengeNewcomer();
bob.challengeNewcomer();
bob.challengeNewcomer();

	FragTrap bob2("josephRoi");
	bob2.meleeAttack("Patrick");
	bob2.rangedAttack("Clark");
	bob2.takeDamage(50);
	bob2.beRepaired(10);
	bob2.beRepaired(100);
	bob2.takeDamage(500);
	bob2.takeDamage(2);

	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");
	bob2.vaulthunter_dot_exe("bobo");

}
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
/*
	FragTrap bob2("joseph");
	FragTrap ok(bob2);

ScavTrap bob3("joseph1");
	ScavTrap ok3(bob3);

	bob2.takeDamage(50);
	ok.takeDamage(50);
bob2.meleeAttack("Patrick");
	bob2.rangedAttack("Clark");
	bob2.takeDamage(50);
	ok = bob2;
	FragTrap stef(bob2);
	stef.takeDamage(50);
	ok.takeDamage(50);	bob2.beRepaired(10);
	ScavTrap rob("bebe");
	ClapTrap clap("salut");

	clap.takeDamage(10);
	*/
 FragTrap a = FragTrap("ST3V3-0");
    FragTrap b = FragTrap("J0HNN13");
    FragTrap c(b);
    FragTrap d = FragTrap("B4M");
    d = c;

    ScavTrap sc = ScavTrap("Scavvie");

    a.meleeAttack("Brick");
    a.takeDamage(50);
    a.rangedAttack("Mordecai");
    a.takeDamage(40);
    a.vaulthunter_dot_exe("Lilith");
    a.beRepaired(65);
    a.vaulthunter_dot_exe("Roland");
    a.takeDamage(1000);

    b.meleeAttack("Brick");
    b.takeDamage(90);
    b.rangedAttack("Mordecai");
    b.beRepaired(150);
    b.vaulthunter_dot_exe("Lilith");
    b.takeDamage(999);
    b.vaulthunter_dot_exe("Roland");
    b.takeDamage(1000);

    sc.challengeNewcomer();
}
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



std::cout << "\n\n\n\n";



    SuperTrap st = SuperTrap("Alex Ezzeddine");
    st.meleeAttack("Tuktuk");
    st.rangedAttack("Putput");
    st.ninjaShoebox(ok);
    st.vaulthunter_dot_exe("Woopie");
}
#include "Sorcerer.hpp"
#include "Victime.hpp"
#include "Peon.hpp"
#include "Paysan.hpp"

int main()
{

	Sorcerer robert("Robert", "the Magnificent");
	Victime jim("Jimmy");
	Peon joe("Joe");
	Paysan stef("stef");
	std::cout << robert << jim << joe << stef;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(stef);
	return 0;
}

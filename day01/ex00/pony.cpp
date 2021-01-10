#include "pony.hpp"

pony::pony(int nblegs, std::string colorPoney): legs(nblegs), color(colorPoney)
{
	std::cout << "Creation d'un poney" << std::endl;

}

pony::~pony()
{
	std::cout << "destruction d'un poney" << std::endl;
	
}
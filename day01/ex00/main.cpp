#include "pony.hpp"

void ponyOnTheStack()
{
	pony ponyStack(2, "jaune");

	std::cout << "Le poney sur la stack a " << ponyStack.legs << " jambes et est " << ponyStack.color << std::endl;
	return ;
}

void ponyOnTheHeap()
{
	pony* ponyHeap = new pony(4, "marron");
std::cout << "Le poney sur la heap a " << ponyHeap->legs << " jambes et est " << ponyHeap->color << std::endl;
	delete ponyHeap;
	return ;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
}
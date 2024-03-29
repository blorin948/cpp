#include "Ice.hpp"
#include <string>
#include <iostream>
#include "Amateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
/*
	IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

    ICharacter *zaz = new Character("zaz");
    Amateria *tmp;

    tmp = src->createMateria("ice");

	zaz->equip(tmp);
	zaz->equip(new Ice);
	tmp = src->createMateria("cure");

	zaz->equip(tmp);
    zaz->equip(new Cure());
    ICharacter* bob = new Character("bob");
	//ICharacter* cob = zaz;

    zaz->use(0, *bob);
    zaz->use(1, *bob);
   zaz->use(2, *bob);
zaz->use(3, *bob);

    delete bob;
    delete zaz;
    delete src;
    return (0);*/
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	Amateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "0 XP=" << tmp->getXP() << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	moi->use(3, *bob);
	moi->use(-1, *bob);
	std::cout << "Unequip 3rd" << std::endl;
	moi->unequip(2);
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	std::cout << "Requip 3rd" << std::endl;
	moi->equip(tmp);
	moi->use(2, *bob);
	std::cout << "3rd XP=" << tmp->getXP() << std::endl;
	delete bob;
	delete moi;
	delete src;
	return (0);
}
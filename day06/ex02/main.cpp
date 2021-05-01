#include "classes.hpp"

int random_nbr(int range)
{
	static int nb = 0;
	int i = 0;
	srand(time(0) + nb);
	nb += 10;
	if (range == 0)
	{
		i = rand();
		return (i);
	}
	i = rand() % range;
	return (i);
}

void identify_from_pointer(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "ptr = A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "ptr = B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "ptr = C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "ref = A" << std::endl;
		(void)a;
	}
	catch(const std::bad_cast& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "ref = B" << std::endl;
		(void)b;
	}
	catch(const std::bad_cast& e)
	{
		//std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "ref = C" << std::endl;
		(void)c;
	}
	catch(const std::bad_cast& e)
	{
		//std::cerr << e.what() << '\n';
	}
	
}

Base *generate(void)
{
	int i = random_nbr(3);
	printf("%d\n", i);
	Base *p;
	if (i == 0)
		p = new A;
	if (i == 1)
		p = new B;
	if (i == 2)
		p = new C;
	return (p);
}

int main()
{
	Base *ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
}
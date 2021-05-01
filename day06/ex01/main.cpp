#include <iostream>
#include <cmath>
#include <iomanip> 
#include <stdio.h>
#include <string.h>

struct data 
{
	std::string s1;
	int n;
	std::string s2;
};

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

void *serialize(void)
{
	const char	a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *ptr = new char[24];
	int i = 0;

	while (i < 8)
	{
		ptr[i] = a[random_nbr(61)];
		i++;
	}
	*reinterpret_cast<int *>(ptr + 8) = random_nbr(0);
	i = 16;
	while (i < 24)
	{
		ptr[i] = a[random_nbr(61)];
		i++;
	}
	return (reinterpret_cast<void *>(ptr));
}

data *deserialize(void *raw)
{
	struct data	*bob = new data;
	char	*ptr = reinterpret_cast<char*>(raw);

	bob->s1 = std::string(ptr, 8);
	bob->s2 = std::string(ptr + 16, 8);
	bob->n = *reinterpret_cast<int *>(ptr + 8);
	return (bob);
}

int main()
{
	struct data *bob;
	void *ptr;
	ptr = serialize();
	bob = deserialize(ptr);
	std::cout << bob->s1 << std::endl << bob->n << std::endl << bob->s2 << std::endl;

	delete bob;
	delete reinterpret_cast<char*>(ptr);

	return (0);
}
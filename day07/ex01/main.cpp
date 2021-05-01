#include "Iter.hpp"


int main()
{
	int i[5];

	i[0] = 1;
	i[1] = 1;
	i[2] = 1;
	i[3] = 1;
	i[4] = 1;

	char str[3] = "ok";
	Iter<char>(str, 2, inc);
	int e = 0;
	while (e < 3)
		printf("%c", str[e++]);
}
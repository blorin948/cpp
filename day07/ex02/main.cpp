#include <iostream>
#include "Array.hpp"
template <typename T>
static void printf_array(const Array<T> &src)
{
    std::cout << "Array display : [size = " << src.getSize() << "] " << std::endl;
    size_t i = -1;
	//printf(" LA %d\n", src.getSize());
	//return ;
   while (++i < src.getSize())
	{
        src.printT(i);
		std::cout << std::endl;
	}

    std::cout << std::endl;
}

int main()
{
// Test operator[]
    Array<int> x(10);
   //printf_array(x);
    x[1] = 1;
   // printf_array(x);
    x[3] = 3;
	//printf_array(x);
/*
	// Test operator=
	Array<int> y = x;
    printf_array(y);
	y[5] = 42;
printf_array(y);
*/
	// Test copy constructor
	Array<int> z(x);
	printf_array(z);
	z[1] = 80;

printf_array(z);
	// Test out of bounds exeption
    try
    {
        (void)x[15];
    }
    catch(const std::exception& e)
    {
        std::cout << "exception catched: " << e.what() << std::endl;
    }

    return (0);
}
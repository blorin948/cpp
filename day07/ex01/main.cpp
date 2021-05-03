#include "Iter.hpp"


class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

void print_ar(int &i)
{
	std::cout << i << std::endl;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; 
	Awesome tab2[5];

	Iter( tab, 5, print );
	printf("\n");
	Iter( tab2, 5, print );

 int        numbers[] = {4, 8, 15, 15, 23, 42};
    std::string names[] = {"Locke", "Reyes", "Ford", \
                           "Jarrah", "Shephard", "Kwon"};

    std::cout << "Names   : ";
    Iter(names, 6, print);
    std::cout << std::endl;

    std::cout << "Numbers printed by template\n";
    Iter <int>(numbers, 6, print);
	std::cout << "Numbers printed by function\n";
	Iter <int>(numbers, 6, print_ar);
    std::cout << std::endl;

return 0;
}

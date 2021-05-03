#include "whatever.hpp"

class   Awesome {
    public:
        Awesome(int n) : _n(n) {}
        bool operator==(Awesome const & rhs) const {return (this->_n == rhs._n);}
        bool operator!=(Awesome const & rhs) const {return (this->_n != rhs._n);}
        bool operator>(Awesome const & rhs) const {return (this->_n > rhs._n);}
        bool operator<(Awesome const & rhs) const {return (this->_n < rhs._n);}
        bool operator>=(Awesome const & rhs) const {return (this->_n >= rhs._n);}
        bool operator<=(Awesome const & rhs) const {return (this->_n <= rhs._n);}
        int getInt(void) const {return (this->_n);}
    private:
        int _n;
};

int 	main(void)
{
	Awesome class_a2(8);
    Awesome class_b2(16);
    std::cout << std::endl;
    std::cout << "-------------------------- DIFF --- ( != )" << std::endl;
    std::cout << "Before:" << std::endl;
    std::cout << "a = " << class_a2.getInt() << " (" << &class_a2 << ")" << std::endl;
    std::cout << "b = " << class_b2.getInt() << " (" << &class_b2 << ")" << std::endl;
    ::swap(class_a2, class_b2);

    std::cout << std::endl;
    std::cout << "After:" << std::endl;
    std::cout << "a = " << class_a2.getInt() << " (" << &class_a2 << ")" << std::endl;
    std::cout << "b = " << class_b2.getInt() << " (" << &class_b2 << ")" << std::endl;

    std::cout << std::endl;
    std::cout << "Min: " << min(class_a2.getInt(), class_b2.getInt()) << " (" << &min(class_a2, class_b2) << ") " << std::endl;
    std::cout << "Max: " << max(class_a2.getInt(), class_b2.getInt()) << " (" << &max(class_a2, class_b2) << ") " << std::endl;
    std::cout << std::endl;
	/*
	std::cout << "/////////////// Standard Test ///////////////" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << "/////////////// Equal Test ///////////////" << std::endl;
	float x = 4.2f, y = 4.2f;
	std::cout << "x : " << x << ", y : " << y << std::endl;
	std::cout << "min : " << ::min(x, y) << std::endl;
	std::cout << "max : " << ::max(x, y) << std::endl;
	std::string f = "chaine3", g = "chaine3";
	std::cout << "string f : " << f << ", string g : " << g << std::endl;
	std::cout << "min : " << ::min(f, g) << std::endl;
	std::cout << "max : " << ::max(f, g) << std::endl;
	return (0);*/
}
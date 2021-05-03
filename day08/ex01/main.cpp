
#include "span.hpp"

void printValues(span *A)
{
	std::cout << "_n = " << A->getnumber() << std::endl;
	std::vector<int> vec = A->getVec();
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << std::endl;
}

int main()
{
	try 
	{
		std::cout<< "----- ADD NUMBER + EXECPTION -----" << std::endl;
		span A(3);
		A.addNumber(4);
		A.addNumber(5);
		A.addNumber(-19);
		printValues(&A);
		A.addNumber(120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		std::cout<< "----- LONGEST SHORTEST span -----" << std::endl;
		span A(4);
		A.addNumber(4);
		A.addNumber(5);
		A.addNumber(-19);
		A.addNumber(120);
		printValues(&A);
		std::cout << "longest span => " << A.longestSpan() << std::endl;
		std::cout << "shortest span => " << A.shortestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try 
	{
		std::cout<< "----- LONGEST SHORTEST span EXCEPTION -----" << std::endl;
		span A(2);
		A.addNumber(42);
		printValues(&A);

		std::cout << "longest span => " << A.longestSpan() << std::endl;
		std::cout << "shortest span => " << A.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		std::cout<< "----- ADD RANGE -----" << std::endl;
		span A(15);
		A.addNumber(15, 3);
		printValues(&A);
		std::cout << "longest span => " << A.longestSpan() << std::endl;
		std::cout << "shortest span => " << A.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		std::cout<< "----- ADD RANGE OF 10000 -----" << std::endl;
		span A(10000);
		A.addNumber(10000, 1);
		//discomment to print
		 //printValues(&A);
		std::cout << "longest span => " << A.longestSpan() << std::endl;
		std::cout << "shortest span => " << A.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try 
	{
		std::cout<< "----- ADD RANGE -----" << std::endl;
		
		span sp(8);
	
		sp.addNumber(42, 54);
		printValues(&sp);
		std::cout << "longest span => " << sp.longestSpan() << std::endl;
		std::cout << "shortest span => " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----- TEST ASSIGNATION -----" << std::endl;

	span A(3);
	A.addNumber(4);
	A.addNumber(5);
	std::cout << "***** A *****" << std::endl;
	printValues(&A);
	span B(1);
	B.addNumber(22);
	std::cout << "***** B *****" << std::endl;
	printValues(&B);
	B = A;
	std::cout << "***** A *****" << std::endl;
	printValues(&A);
	std::cout << "***** B *****" << std::endl;
	printValues(&B);
	
    std::cout << "----- TEST COPY -----" << std::endl;
	span C(3);
	C.addNumber(4);
	C.addNumber(5);
	std::cout << "***** C *****" << std::endl;
	printValues(&C);
	span D(C);
	std::cout << "***** D *****" << std::endl;
	printValues(&D);
	C.addNumber(7);
	std::cout << "***** C *****" << std::endl;
	printValues(&C);
	std::cout << "***** D *****" << std::endl;
	printValues(&D);
	
	return (0);
}

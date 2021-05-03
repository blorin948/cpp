#include "Array.hpp"

int 	main(void)
{
	std::cout << "////////// TEST INT //////////" << std::endl;
	try
	{
		std::cout << "///// Array with Size zero /////" << std::endl;
		Array<int> arr;
		std::cout << "Size : " << arr.getSize() << std::endl;
		arr.printT();
		arr[1] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl ;
	}

	try
	{
		std::cout << "///// Array with Size 10 /////" << std::endl << std::endl;
		Array<int> arr1(10);
		std::cout << "Size : " << arr1.getSize() << std::endl << std::endl;
		arr1.printT();
		std::cout << arr1[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	try
	{
		std::cout << "///// Copy constructor and assignation operator /////" << std::endl << std::endl;
		Array<int> arr(10);
		for(unsigned int i = 0 ; i < arr.getSize() ; i++)
			arr[i] = i;
		Array<int> arr1(arr);
		std::cout << "arr1 Size : " << arr1.getSize() << std::endl;
		arr1.printT();
		Array<int> arr2(20);
		arr2 = arr1;
		std::cout << std::endl << "arr2 Size : " << arr2.getSize() << std::endl;
		arr1.printT();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl <<std::endl;
	}
	std::cout << std::endl << "////////// TEST STRING //////////" << std::endl;
	try
	{
		std::cout << "///// Array with Size zero /////" << std::endl << std::endl;
		Array<std::string> arr1;
		std::cout << "Size : " << arr1.getSize() << std::endl;
		arr1.printT();
		arr1[1] = "Bonjour";
	}
	catch(const std::exception& e)
	{		
		std::cerr << e.what() << std::endl << std::endl ;
	}

	try
	{
		std::cout << "///// Array with Size 3 /////" << std::endl << std::endl;
		Array<std::string> arr1(3);
		std::cout << "Size : " << arr1.getSize() << std::endl;
		for(unsigned int i = 0 ; i < arr1.getSize() ; i++) 
			arr1[i] = "String";
		arr1.printT();
		std::cout << arr1[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl<< std::endl << std::endl;
	}
	
	try
	{
		std::cout << "///// Copy constructor and assignation operator /////" << std::endl << std::endl;
		Array<std::string> arr(3);
		for(unsigned int i = 0 ; i < arr.getSize() ; i++)
			arr[i] = "String ";
		Array<std::string> arr1(arr);
		std::cout << "arr1 Size : " << arr1.getSize() << std::endl << std::endl;
		arr1.printT();
		Array<std::string> arr2(20);
		arr2 = arr1;
		std::cout << "arr2 Size : " << arr2.getSize() << std::endl << std::endl;
		arr2.printT();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl <<std::endl << std::endl <<std::endl;
	}
	return (0);
}

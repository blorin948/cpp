#include <iostream>
#include <cmath>
#include <iomanip>  

void printchar(double value)
{
	if (value > 127 || value < 0 || std::isnan(value) == 1 || std::isinf(value) == 1)
	{
		std::cout << "char = Impossible" << std::endl;
		return ;
	}
	if (isprint(value) != 0)
		std::cout << "char = " << static_cast<char>(value) << std::endl;
	else if (isprint(value) == 0)
		std::cout << "char = Non displayable" << std::endl;
}

void printint(double value)
{
	if (std::isnan(value) == 1 || std::isinf(value) == 1)
		std::cout << "int = impossible" << std::endl;
	else if (value > 2147483647 || value < -2147483648)
		std::cout << "int = Non displayable" << std::endl;
	else
	{
		std::cout << "int = " <<  static_cast<int>(value) << std::endl;
	}
}

void printfloat(double value)
{
	std::cout << std::fixed  << std::setprecision(1) << "float = " <<  static_cast<float>(value) << "f" << std::endl;
}


void printdouble(double value)
{
	std::cout << std::fixed  << std::setprecision(1) << "double = " <<  value << std::endl;
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int isChar(char *str)
{
	if (ft_strlen(str) == 1)
	{
		if (str[0] >= 48 && str[0] <= 57)
			return (0);
		return (1);
	}
	return (0);
}

void printAll(char c, int i, double d, float f)
{
	std::cout.precision(1);
	std::cout << std::fixed;
	if (isprint(c))
		std::cout << "char = " << c << std::endl;
	else
		std::cout << "Non displayable." << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "float = " << f << "f" << std::endl;
	std::cout << "double = " << d << std::endl;
}

int main(int ac, char **av)
{
	double value;
	if (ac != 2)
	{
		std::cout << "wrong numbers of arguments." << std::endl;
		return (0);
	}
	std::string str = av[1];
	if (isChar(av[1]))
	{
		char c = av[1][0];
		int i = static_cast<int>(c);
		double d = static_cast<double>(c);
		float f = static_cast<float>(c);
		printAll(c, i, d, f);
	}
	else
	{
		try
		{
			value = std::stod(str);
			printchar(value);
			printint(value);
			printfloat(value);
			printdouble(value);
		}
		catch(const std::exception& e)
		{
			std::cout << "Error with inputs" << std::endl;
			return (0);
		}
	}
}
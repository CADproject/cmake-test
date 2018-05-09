#include <iostream>

#include "plus.h"
#include "mult.h"

int main()
{
	std::cout << "========================" << std::endl;

	std::cout << "My first CMake project!!" << std::endl;

	std::cout << "PLUS: " << plus(1, 8) << std::endl;
	std::cout << "MULT: " << mult(1, 8) << std::endl;

	std::cout << "========================" << std::endl;
	
	return 0;
}
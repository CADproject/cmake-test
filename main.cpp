#include <iostream>
#include <cassert>

#include "plus.h"
#include "mult.h"

int main()
{
	std::cout << "========================" << std::endl;

	std::cout << "My first CMake project!!" << std::endl;

	std::cout << "PLUS: " << plus(1, 8) << std::endl;
	std::cout << "MULT: " << mult(1, 8) << std::endl;

    int value = 123;
    int* pValue = &value;

    std::cout << *pValue << std::endl;
    std::cout << pValue << std::endl;
    std::cout << sizeof(pValue) << std::endl;
    
    assert(false);

	std::cout << "========================" << std::endl;
	
	return 0;
}

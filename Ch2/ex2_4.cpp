#include <iostream>

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << "u2 - u = "<<u2 - u << std::endl;  
	std::cout << "u - u2 = "<< u - u2 << std::endl; 

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	//u = 42;
	//i = 10;
	std::cout << "i - u = "<< i - u << std::endl;
	std::cout << "u - i = "<< u - i << std::endl;

	//u = 10;
	//i = -42;
	//std::cout << i + i << std::endl;  // prints -84
	//std::cout << u + i << std::endl;  // if 32-bit ints, prints 4294967264
	return 0;
}
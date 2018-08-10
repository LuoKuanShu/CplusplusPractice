#include <iostream>

int main(void){
	bool b = 42;
	std::cout << "bool b assigned 42 is "
		<< b << std::endl;

	int i = b;
	std::cout << "int b assigned bool b is "
		<< i << std::endl;
	
	/*
	i = 3.14;
	std::cout << " int i assigned double 3.14 is "
		<< i << std::endl;
	*/

	double pi = i;
	std::cout << "double pi assigned int i is "
		<< i <<std::endl;

	unsigned char c = -1;
	std::cout << "unsigned char c assigned -1 is "
		<< c <<std::endl;

	/*
	signed char c2 = 256;
	std::cout << "signed char assigned 256 is "
		<< c2 << std::endl;
	*/	
	
	return 0;

}

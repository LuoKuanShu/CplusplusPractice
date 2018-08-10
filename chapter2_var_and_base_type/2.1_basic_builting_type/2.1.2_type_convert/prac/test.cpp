#include <iostream>

int main(void){
	unsigned u1=10,u2 = 42;
	std::cout << "both u1 and u2 is unsigned int."
		<< "u1 is 10,u2 is 42."
		<< std::endl
		<< std::endl;
	
	std::cout << "the expression u2 - u1 is "
		<< u2 -u1 << std:: endl;
	std::cout << "the expression u1 - u2 is "
		<< u1 - u2 << std::endl
		<< std::endl;


	int i = 10,i2 = 42;
	std::cout << "both i and i2 is int."
		<< "the i is 10,the i2 is 42."
		<< std::endl << std::endl;
	std::cout << "the expression i2 - i is " 
		<< i2 - i << std::endl;
	std::cout << "the expression i - i2 is "
		<< i - i2 << std::endl;
	std::cout << "the expression i - u is "
		<< i - u1 << std::endl;
	std::cout << "the expression u - i is "
		<< u1 - i << std::endl;

	return 0;
}

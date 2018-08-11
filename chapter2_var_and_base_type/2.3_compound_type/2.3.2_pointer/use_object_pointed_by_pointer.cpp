#include <iostream>

int main(void){
	int i = 42;
	int *ip = &i;
	 
	std::cout << *ip << std::endl;  

	std::cout << " now we change the i's value by the expression *ip to make it be 10" << std::endl;

	*ip = 10;

	std::cout << "now we print i through multi ways:" 
		<< std::endl;
	std::cout << "*ip = " 
		<< *ip << std::endl;
	std::cout << " i = " 
		<< i << std::endl;

	int *iNullP = 0;
	std::cout << "but what if we assign pointer initialized with 0 through char *?"
		<< std::endl;
	std::cout << *iNullP << std::endl;

	return 0;


}

#include <iostream>


int main(void){

	int ival = 42;
	int *ip = &ival;

	std::cout << ip << std::endl;

	return 0;
}

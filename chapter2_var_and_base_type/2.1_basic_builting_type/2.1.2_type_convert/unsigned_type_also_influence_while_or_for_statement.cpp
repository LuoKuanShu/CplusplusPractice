#include <iostream>

int main(void){

	//this will cause endless loop.
	for (unsigned u = 10;u >= 0;--u){
		std::cout << u << std::endl;
	}

	return 0;
}

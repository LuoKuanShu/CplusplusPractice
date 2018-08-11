#include <iostream>

int main(void){
	int i = 12;
	double d = 23.2;

	void *vp = &i;
	/*
	std::cout << *vp
		<< std::endl;

	vp = &d;
	std::cout << *vp
		<< std::endl;
	
	*/

	std::cout << vp 
		<< std::endl;
	return 0;
}

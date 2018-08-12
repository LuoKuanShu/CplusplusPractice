#include <iostream>

int main(void){
	int i = 1;
	int *ip;
	int *&refP = ip;

	refP = &i;
	std::cout << *refP << std::endl;
	*refP = 50;
	std::cout << *refP << std::endl;

	return 0;


}


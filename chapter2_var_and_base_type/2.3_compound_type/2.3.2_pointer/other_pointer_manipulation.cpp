#include <iostream>

int main(void){
	//now we use = to compare two pointer whether equals that have same base data type.
	
	int i = 1;
	int i2 = 2;

	int *ip1 = &i;
	int *ip2 = ip1;
	int *i2p = &i2;

	if (ip1 == ip2){
		std::cout << "pointer ip1 and ip2 point to same object."
			<< std::endl;
	}else{
		std::cout << "ip1 and ip2 point to different object"
			<< std::endl;
	}

	if (ip1 == i2p){
		std::cout << "ip1 and i2p point to same object."
			<< std::endl;
	}else{
		std::cout << "ip1 and i2p point to different object."
			<< std::endl;
		
	}

	return 0;

}

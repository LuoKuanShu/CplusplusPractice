#include <iostream>

int main(void){
	int i = 45;
	
	int *ip = &i;
	int *nullP = nullptr;

	std::cout << "now we start:" << std::endl
		<< std::endl;

	std::cout << "first,we distinguish pointer initialized with a specific object: " << std::endl;
	if (ip){
		std::cout << true << std::endl;
	}
	else{
		std::cout << false << std::endl;
	}

	std::cout << std::endl;
	std::cout << " and then we distinguish the null pointer: "
		<< std::endl;
	if (nullP){
		std::cout << true << std::endl;
	}
	else{
		std::cout << false << std::endl;
	}

	return 0;

}


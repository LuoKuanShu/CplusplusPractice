#include <iostream>

int main(void){

	int i = 100;
	int sum = 0;

	for (int i = 0;i != 10;++i){
		std::cout << i << std::endl;
		sum += i;
	}

	std::cout << i << " " << sum << std::endl;
	return 0;

}


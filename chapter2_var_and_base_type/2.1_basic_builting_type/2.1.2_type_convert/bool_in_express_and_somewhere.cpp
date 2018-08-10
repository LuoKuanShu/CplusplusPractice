#include <iostream>

int main(void){
	int i = 42;
	if (i){
		std::cout << "although int i is 42,but the result in addition xpression is true."
			<< std:: endl;
	
	}

	bool b = true;

	std::cout << "bool b is true,the result of b + 2 is "
		<< b + 2 << std::endl;
	
	b = false;
	std::cout << "now change b's value to false,and calculate expression b + 2 again"
		",the result is "
		<< b + 2 << std::endl;

	return 0;

}

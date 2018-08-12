#include <iostream>

int main(void){
	int i = 1;
	const int ci1 = i;
	const int ci2 = ci1;
	int i2 = ci2;

	std::cout << i << "  "  
		<< ci1 << " " 
		<< ci2 << "   " 
		<< i2 << std::endl;

}

#include <iostream>

int main(void){
	std::cout << L'a' << std::endl;  //wchar_t
	std::cout << u8"hi" << std::endl;  //unicode of utf-8


	//like-int type
	std::cout << 48ULL << std::endl;  //appoint unsigned long long type.
	std::cout << 49L << std::endl;    //appoint long int type.
	std::cout << 024UL << std::endl;  // appoint oct number to unsigned long type.
	std::cout << 0x14ULL << std::endl;   //appoint hex number to unsigned long long type.


	//like-float type
	std::cout << 1E-3F << std::endl;   // appoint float type.
	std::cout << 3.1415926L << std::endl;  // appoint long double type.

	return 0;

}

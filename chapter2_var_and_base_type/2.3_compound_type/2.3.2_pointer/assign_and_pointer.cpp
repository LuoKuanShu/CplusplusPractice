#include <iostream>

int main(void){
	int i = 42;
	int *ip = 0; //a null pointer
	int *ip2 = &i; //a pointer that point to int variable i
	int *ip3; //declaration a pointer but point to nothing

	ip3 = ip2; //now ip2 and ip3 point to a same object i
	std::cout << "we can print this object pointed by both ip2 and ip3." <<std::endl;
	std::cout << "ip2 and ip3 is : " 
		<< *ip2 << "  " 
		<< *ip3 << std::endl;
	return 0;
}

#include <iostream>
#include <typeinfo>

int main(void){
	int* ip,i;
	int *p1,*p2;
	int* p3;
	int* p4;

	
	std::cout << "ip is " 
		<< typeid(ip).name() << std::endl;
	std::cout << "i is " 
		<< typeid(i).name() << std::endl;

	return 0;

}

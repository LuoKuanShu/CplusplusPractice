#include <iostream>

int main(void){
	int i = 9,*ip = &i,&ri = i;

	std::cout << "i :" 
		<< i << std::endl;
	std::cout << " ip : "
		<< *ip << std::endl;
	std::cout << "ri : " 
		<< ri << std::endl;

	return 0;

}

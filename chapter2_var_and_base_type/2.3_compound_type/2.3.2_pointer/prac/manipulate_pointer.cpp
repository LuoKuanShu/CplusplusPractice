#include <iostream>

int main(void){
	int i = 12;
	int *ip = &i;

	std::cout << "print address keeped by pointer ip before modifying it: " 
		<< ip << std::endl;
	std::cout << "now we modify the object that pointed by ip."
		<< std::endl;
	int age = 20;
	ip = &age;
	std::cout << "now the new address that keeped by ip: "
		<< ip << std::endl;

	std::cout << std::endl;

	std::cout << " the value of object that keeped by ip: "
		<< *ip << std::endl;
	std::cout << "now we change  the value of object keeped by ip."
		<< std::endl;
	*ip = 25;
	std::cout << " now the new value is : "
		<< *ip 
		<< std::endl;

	return 0;

}

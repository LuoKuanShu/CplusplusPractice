#include <iostream>

int reused = 42;  //outer scope

int main(void){
	int unique = 0;
	std::cout << reused 
		<< "  " 
		<< unique
		<< std::endl;

	int reused = 0;  //inner scope
	
	std::cout << reused   //that is inner scope
		<< "  " 
		<< unique
		<< std::endl;    

	std::cout << ::reused   // that is outer scope
		<< unique
		<< std::endl;
	return 0;
}

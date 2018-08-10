#include <iostream>

//we declaration the var,but not initialized it.then it will be default initialized to 0 if it is a builting type.

int var;
double var2;
bool b;
char c;
int main(void){
	std::cout << "the int  var is "
		<< var << std::endl;
	std::cout << "the double var2 is "
		<< var2 << std::endl;
	std::cout << "the bool b is "
		<< b << std::endl;
	std::cout << "the char c is "
		<< c << std::endl;

	//but var definited in the function is not initialized at all by system.
	//so try to assign such a var maybe cause trouble.
	int i;
	std::cout << i;
	return 0;

}

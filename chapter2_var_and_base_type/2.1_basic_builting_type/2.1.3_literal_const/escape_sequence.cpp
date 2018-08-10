#include <iostream>

int main(void){
	std::cout << '\n';
	std::cout << "\tHi!\n";


	//we also can use generalized escape sequence.
	std::cout << "\40\40\40\40Hi!\n";

	//"\1234" expresses two chars: cahr \123 and char 4.
	std::cout << "\1234" << std::endl;

	//the following statement will cause trouble:
	//the hex escape sequence out of range.
	//because most of machine's char is 8 bit.
	
	//std::cout << "\x1234" << std::endl;

	return 0;
}

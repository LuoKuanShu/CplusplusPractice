#include <iostream>

using namespace std;

int main(void){

	const int ci = 1024;  //can't modify const variable through const reference.
	const int &cr = ci;

	cr = 42; //cannot assign to variable 'cr' with const qualified 'const int &'. 
	int &ir = ci;  //cannot 





}

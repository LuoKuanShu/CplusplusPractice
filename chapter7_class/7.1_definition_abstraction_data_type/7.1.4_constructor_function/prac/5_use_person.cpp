#include <iostream>
#include "Person.c"

using namespace std;

int main(void) {
	Person a;
	print(cout,a) << endl << endl;
	
	Person b {"Tom"};
	print(cout,b) << endl;

	Person c {"Tom","America"};
	print(cout,c) << endl;

	Person d {cin};
	print(cout,d) << endl;
}

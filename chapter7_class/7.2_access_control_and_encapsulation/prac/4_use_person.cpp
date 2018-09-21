#include <iostream>
#include "Person.c"

using namespace std;

int main(void) {
	Person tom;

	read(cin,tom);
	cout << endl;
	print(cout,tom);

}

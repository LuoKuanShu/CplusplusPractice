#include <iostream>
#include "Person.c"

using namespace std;

int main(void) {
	Person tom;

	cout << "enter the your name and address: " << endl;
	read(cin,tom);
	print(cout,tom);

	read(cin,tom);
	print(cout,tom);
}

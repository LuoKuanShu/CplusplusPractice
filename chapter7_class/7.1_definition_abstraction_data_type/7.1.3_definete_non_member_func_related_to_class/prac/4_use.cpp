#include <iostream>
#include "Person.c"

using namespace std;

int main(void) {
	Person a;

	read(cin,a);

	cout << endl;

	print(cout,a);
}

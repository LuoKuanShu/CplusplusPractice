#include <iostream>
#include "Screen.c"

using namespace std;

int main(void) {
	Screen s(44,44,'*');
	print(cout,s);

	cout << s.get() << endl;
	cout << s.get(1,4) << endl;

}

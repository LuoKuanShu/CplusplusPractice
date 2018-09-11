#include <iostream>

using  namespace std;

int main(void){

	int i = 2;
	int &ri = i;
	const int &rci = i;

	cout << " rci: " << rci << endl;
	cout << "we change i through ri not rci." << endl;
	ri += i;
	cout << " rci: " << rci << endl;
	cout << "this tell me: " << endl
		<< "we can change i with a non-const ref to it although we can't use const ref." << endl;
}

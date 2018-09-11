#include <iostream>

using namespace std;

int main(void){
	typedef double db;
	typedef db base,*pd;   //define multi alias for multi type in one line.

	db d = 1.2;
	base d2 = d;

	pd pd1 = &d;


	cout << d << endl;
	cout << d2 << endl;
	cout << *pd1 << endl; 
}

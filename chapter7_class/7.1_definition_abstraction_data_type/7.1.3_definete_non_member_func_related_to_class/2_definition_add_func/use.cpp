#include <iostream>
#include "Sales_data.c"

using namespace std;

int main(void) {
	Sales_data a,b;

	cout << "init a and b,enter bookNo,units_sold and price:  " << endl;

	//test read
	auto &i = read(cin,a);	
	read(i,b);
	
	cout << "a and b: " << endl;
	//test print
	print(cout,a) << endl;
	print(cout,b) << endl;

	cout << "\nnow add a to b: " << endl;
	print(cout,add(a,b)) << endl;

}

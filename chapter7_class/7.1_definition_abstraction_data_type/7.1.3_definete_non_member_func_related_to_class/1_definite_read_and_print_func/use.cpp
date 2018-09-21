#include <iostream>
#include "Sales_data.c"

using namespace std;

int main(void) {
	Sales_data a,b;

	cout << "init a and b,enter bookNo,units_sold and price:  " << endl;

	//test read
	auto &i = read(cin,a);	
	read(i,b);

	//test print
	print(cout,a) << endl;
	print(cout,b) << endl;

}

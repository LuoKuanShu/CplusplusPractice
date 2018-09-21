#include <iostream>
#include "My_Sales_data.c"

using namespace std;

int main(void) {
	Sales_data a;
	
	//while a init by a default constractor by myself,it can do as compiler's synthesized default constractor.
	cout << "size of a.bookNo: " << a.bookNo.size() << endl;
	cout << "within class,the init value of units_sold is: 8, and the a's is : " << a.units_sold << endl;
}

#include <iostream>
#include "My_Sales_data.c"

using namespace std;

int main(void) {
	Sales_data total; 

	cout << "enter data,such as isbn,units_sold and price: " << endl;
	if (!read(cin,total)) {
		cout << "no data." << endl;
		return -1;	
	}

	Sales_data trans;   //keep the next record
	while (read(cin,trans)) {
		if (total.isbn() == trans.isbn()) {
			total = add(total,trans);   //actualy both total and trans doesn't change after add return.
		}else {
			cout << "\ntotal: " << endl;
			print(cout,total);
			cout << endl;
			total = trans;
		}
	}
	print(cout,total);


}

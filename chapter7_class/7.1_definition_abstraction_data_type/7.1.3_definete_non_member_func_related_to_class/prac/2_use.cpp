#include <iostream>
#include "My_Sales_data.c"

using namespace std;

int main(void) {
	Sales_data total;

	if (read(cin,total)) { //init total
		Sales_data trans;
		
		while (read(cin,trans)) {
			//add
			if (total.isbn() == trans.isbn()){
				total.combine(trans);
			}else {
				print(cout,total) << endl;
				total = trans;	
			}
		}

	}else {
		cout << "error,no data." << endl;
	}
}

#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main(void){

	//declare
	Sales_data temp;
	unsigned sum_book = 0;
	double each_price = 0;

	//loop for input
	while(cin >> temp.sISBN >> temp.sold_book >> temp.sold_price){
		sum_book += temp.sold_book;
		each_price += temp.sold_price;

	}
	
	//print
	cout << "the sum of book is " << sum_book << endl;
	cout << "the each of price is " << each_price << endl;

	return 0;
}

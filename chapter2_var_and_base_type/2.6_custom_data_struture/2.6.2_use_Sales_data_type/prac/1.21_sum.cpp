#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main(void){
	//declare obj data1 and data2,then get sum of them.
	Sales_data data1,data2;
	
	//data1
	cout << "input for data1: " << endl;
	cin >> data1.sISBN >> data1.sold_book >> data1.sold_price;

	//data2
	cout << "input fot data2: " << endl;
	cin >> data2.sISBN >> data2.sold_book >> data2.sold_price;

	//judge
	if (data1.sISBN == data2.sISBN){
		//sum for each element.
		unsigned sum_book = data1.sold_book + data2.sold_book;
		double each_price = (data1.sold_price + data2.sold_price) / 2;
		
		//print
		cout << "the sum of data1 and data2 is: " << endl;
		cout << sum_book << " "
			<< each_price << endl;

		//success
		return 0;
	}else{
		cerr <<  " illness data for data1 and data2! " 
			<< endl;

		//failed
		return -1;
	}


}

#include <iostream>
#include "Sales_data.h"
#include <string>


using namespace std;

int main(void){
	Sales_data data1,data2;	
	
	double price = 0;
	
	//input for first sold of data1.
	//calculate final revenue.
	
	cout << " input isbn sold price for data1: " 
		<< endl;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	//data2 same as data1.
	cout << "input isbn sold price of data2: " 
		<< endl;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	//print sum
	
	//if both two book is same
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//print
		cout << " isbn totalCnt and totalRevenue: " 
			<< endl
			<< data1.bookNo
			<< " " 
			<< totalCnt << " " 
			<< totalRevenue 
			<< "price_every" << endl;
		//print how many the book sold.
		if (totalCnt != 0){

			cout << totalRevenue/totalCnt << endl;
		}
		else{
			cout << " (no sales!)" << endl;	
		}
		
		return 0;
	}else{

		cerr << "data must refer to the same ISBN." 
			<< endl;

		return -1;
	}
	
}

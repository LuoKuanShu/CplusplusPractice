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
	cin >> data2.bookNO >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;


}

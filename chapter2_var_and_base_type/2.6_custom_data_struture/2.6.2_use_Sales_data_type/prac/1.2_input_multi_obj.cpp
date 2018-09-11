#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main(void){

	//declare Sales_data object temp.
	Sales_data temp;


	//if no data remian,the loop will stop.
	unsigned index = 1;
	while (cin >> temp.sISBN >> temp.sold_book >> temp.sold_price){
		cout << "temp " << index << " : " << endl
			<< temp.sISBN << " "
			<< temp.sold_book << " "
			<< temp.sold_price << endl << endl;
		++index;
	}

	return 0;

}

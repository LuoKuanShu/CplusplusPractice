#include <iostream>
#include "Sales_data.h"

using namespace std;

int main(void){
	
	//declare
	Sales_data cur,next;
	unsigned sold_num = 1;

	//input
	
	//initial cur
	cin >> cur.sISBN >> cur.sold_book >> cur.sold_price;
	sold_num = cur.sold_book;

	//initial next never stop util no data
	while (cin >> next.sISBN >> next.sold_book >> next.sold_price){
		//judge

		//equls
		if( cur.sISBN != next.sISBN ){
			cout << "the book of " 
				<< cur.sISBN
				<< " have "
				<< sold_num
				<< " sold records."
				<< endl;
			//setup
			cur = next;
			sold_num = cur.sold_book;
		}else{  
			sold_num += next.sold_book;
		}
	}

	//output last record.
	cout << "the book of "
		<< cur.sISBN 
		<< " have "
		<< sold_num
		<< " records."
		<< endl;
	
	return 0;
}

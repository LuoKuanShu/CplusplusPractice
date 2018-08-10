#include <iostream>
#include "Sales_item.h"

int main(void)
{
	Sales_item cur_item,next_item;
	int sales_in_all = 1;
	
	if( std::cin >> cur_item ){ // if no data in input stream,it will not carry out any next line code.

		while (std::cin >> next_item){
	
			if (cur_item.isbn() == next_item.isbn())
			{
				++sales_in_all;		
			}
			else
			{
				std::cout << " the book that has isbn "
					<< cur_item.isbn() 
					<< " only has "
					<< sales_in_all
					<< " sale record."
					<<std::endl;
				cur_item = next_item;
				sales_in_all = 1;
			}
		}

	
		std::cout << "the book has isbn "
			<< cur_item.isbn()
			<< " has "
			<< sales_in_all
			<< " sales recorde."
			<< std::endl;
		
	}

	return 0;
}

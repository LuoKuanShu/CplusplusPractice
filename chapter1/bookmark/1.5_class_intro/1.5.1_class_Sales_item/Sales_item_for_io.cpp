#include <iostream>
#include "Sales_item.h"

int main(void)
{
	Sales_item book;

	//input for isbn number,sales amount and sales price.
	std::cout << "enter three int number for isbn,sales amount and sales price:  " << std:: endl;
	std::cin >> book;
	std::cout << book << std:: endl;

	return 0;

}

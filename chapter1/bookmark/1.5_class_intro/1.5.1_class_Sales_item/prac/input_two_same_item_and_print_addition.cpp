#include <iostream>
#include "Sales_item.h"

int main(void)
{
	Sales_item item1,item2,sum;
	
	std::cin >> item1 >> item2;
	sum = item1 + item2;

	std::cout << "the item1 is "
		<< item1 << std::endl;
	std::cout << "the item2 is "
		<< item2 << std:: endl;

	std::cout << "the addition result of item1 and item2 is "
		<< sum 
		<< std::endl;

	return 0;
}

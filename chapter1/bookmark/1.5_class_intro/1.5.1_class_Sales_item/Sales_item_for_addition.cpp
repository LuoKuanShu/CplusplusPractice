#include <iostream>
#include "Sales_item.h"

int main(void)
{
	Sales_item item1,item2;
	std::cout << "input for item1 and item2:  " << std:: endl;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	return 0;

}

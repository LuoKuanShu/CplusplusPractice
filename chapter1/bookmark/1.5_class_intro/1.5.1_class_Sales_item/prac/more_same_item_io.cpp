#include <iostream>
#include "Sales_item.h"

int main(void)
{
	Sales_item a,sum;
	
	std::cin >> sum;

	while(std::cin >> a){
		std::cout << a << std::endl;
		sum += a;
	}

	std::cout << "the sum is " 
		<< sum << std::endl;
	return 0;
}

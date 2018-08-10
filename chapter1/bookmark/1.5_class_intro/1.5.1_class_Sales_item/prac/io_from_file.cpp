#include <iostream>
#include "Sales_item.h"

/*this script receives&output  data from&to file book_sales using io
 * redirection in tne terminal enviroment.
 */

int main(void)
{
	Sales_item item;
	
	while (std::cin >> item){
		std::cout << item << std:: endl;
	}

	return 0;
}

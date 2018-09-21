#include <iostream>
#include "My_Sales_data.c"

using namespace std;

int main(void) {
	Sales_data a = {"isbn",10,20.5};   //initializer_list

	print(cout,a);
}

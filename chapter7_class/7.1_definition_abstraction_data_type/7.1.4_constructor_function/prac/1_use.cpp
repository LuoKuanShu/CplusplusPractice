#include <iostream>
#include "My_Sales_data.c"

using namespace std;

int main(void) {
	//default constructor
	Sales_data def;
	//all in init list
	Sales_data list_all {"allList",49,8.7};
	//apart in init list
	Sales_data list_apart {"apartList"};
	//construct with istream
	Sales_data i_obj {cin};

	cout << "default: " << endl;
	print(cout,def) << endl;

	cout << "all list: " << endl;
	print(cout,list_all) << endl;

	cout << "apart list: " << endl;
	print(cout,list_apart) << endl;

	cout << "istream: "  << endl;
	print(cout,i_obj) << endl;

}

#include <iostream>

using namespace std;

struct Sales_data {

	//member func declaration
	//isbn() is a member func declarate and definite all within class.
	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//definition combine()
Sales_data &Sales_data::combine(const Sales_data &item){
	units_sold += item.units_sold;
	revenue += item.revenue;

	return *this;
}

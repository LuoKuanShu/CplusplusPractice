#include <iostream>

using namespace std;

struct Sales_data {

	//member func declaration
	//isbn() is a member func declarate and definite all within class.
	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data&);
	double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//definitionn member func
//definition combine()
Sales_data &Sales_data::combine(const Sales_data &item){
	units_sold += item.units_sold;
	revenue += item.revenue;

	return *this;
}
//avg_price
double Sales_data::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}else {
		return 0;
	}
}

//declaration read and print
istream &read(istream&,Sales_data&);
ostream &print(ostream&,const Sales_data&);

//definition read and print
istream &read(istream &my_cin,Sales_data &item){
	double price = 0.0;

	my_cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;

	return my_cin;
}

ostream &print(ostream &my_cout,const Sales_data &item){
	my_cout << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << endl;
	return my_cout;
}

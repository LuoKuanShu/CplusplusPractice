#include <iostream>

using namespace std;

struct Sales_data {
	//constractor 
	//Sales_data() { cout << "in default constractor by myself." << endl; }
	Sales_data()=default; //only can declaration in class.
	//definition in class
	Sales_data(const std::string &s,unsigned sold,double price):bookNo(s),units_sold(sold),revenue(sold * price) { }


	//member func declaration
	//isbn() is a member func declarate and definite all within class.
	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data&);
	double avg_price() const;
	
	std::string bookNo;
	unsigned units_sold = 8;
	double revenue = 0.0;
};



//member definition
//definition combine()
Sales_data &Sales_data::combine(const Sales_data &item){
	units_sold += item.units_sold;
	revenue += item.revenue;

	return *this;
}

double Sales_data::avg_price() const {
	if (units_sold){
		return revenue / units_sold;
	}else {
		return 0;
	}
}

//declaration non-member func
istream& read(istream&,Sales_data&);
ostream& print(ostream&,const Sales_data&);
Sales_data add(const Sales_data&,const Sales_data&);

//definition non-member func
istream &read(istream &my_cin,Sales_data &item){
	double price = 0.0;

	my_cin >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;

	cout << "read success." << endl;

	return my_cin;
}

ostream &print(ostream &my_cout,const Sales_data &item) {
	my_cout << "isbn: " << item.isbn() << " ";
	my_cout << "units_sold: " << item.units_sold << " ";
	my_cout << "revenue: " << item.revenue << " ";
	my_cout << "avg_price: " << item.avg_price() << " " << endl;
	
	cout << "print success." << endl;
	return my_cout;

}

Sales_data add(const Sales_data &a,const Sales_data &b) {
	Sales_data sum = a;

	sum.combine(b);
	return sum;
}

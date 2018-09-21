#include <iostream>

using namespace std;

class Sales_data {

//constructor
public:
	//constractor 
	//Sales_data() { cout << "in default constractor by myself." << endl; }
	Sales_data()=default; //only can declaration in class.
	//definition in class
	Sales_data(const std::string &s,unsigned sold,double price):bookNo(s),units_sold(sold),revenue(sold * price) { }
	Sales_data(const std::string &s):bookNo(s) { }    //use s to init bookNo,and others use default initialze.
	//declaration in class
	Sales_data(std::istream&);

public:
	//member func declaration
	//isbn() is a member func declarate and definite all within class.
	std::string isbn() const {return bookNo;}
	double avg_price() const;
	Sales_data &combine(const Sales_data&);

//get/set 
public: 
	string getBookNo() const { return bookNo; }
	unsigned getUnitsSold() const { return units_sold; }
	double getRevenue() const { return revenue; }

	Sales_data &setUnitsSold(const unsigned &sold) {units_sold = sold; return *this; }
	Sales_data &setRevenue(const double &re) {revenue = re; return *this; }
	Sales_data &setBookNo(const string &no) {bookNo = no; return *this; }
	
private:
	std::string bookNo;
	unsigned units_sold = 10;
	double revenue = 10;
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
	
	cout << "enter bookNo,units_sold and price: " << endl;


	string t_isbn;
	unsigned t_units_sold = 0;
	double re = t_units_sold * price;
	my_cin >> t_isbn >> t_units_sold >> price;

	//set
	item.setBookNo(t_isbn).setUnitsSold(t_units_sold).setRevenue(re);

	cout << "read success." << endl;

	return my_cin;
}

ostream &print(ostream &my_cout,const Sales_data &item) {


	my_cout << "isbn: " << item.isbn() << " ";
	my_cout << "units_sold: " << item.getUnitsSold() << " ";
	my_cout << "revenue: " << item.getRevenue() << " ";
	my_cout << "avg_price: " << item.avg_price() << " " << endl;
	
	cout << "print success." << endl;
	return my_cout;

}

Sales_data add(const Sales_data &a,const Sales_data &b) {
	Sales_data sum = a;

	sum.combine(b);
	return sum;
}


//definition outof class
Sales_data::Sales_data(std::istream &my_cin) {   //cause constructor Sales_data::Sales_data(istream&) use the read func,so it must be behind of read.
        read(my_cin,*this);
}


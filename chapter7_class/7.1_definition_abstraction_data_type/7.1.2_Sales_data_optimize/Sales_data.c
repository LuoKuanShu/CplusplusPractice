#include <istream>


//daclaration Sales_data

struct Sales_data {
	//member function,must declaration inside struct,definition inside in struct or outof struct;
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;

	//data member
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//Sales_datas_non_member_intrface_func
Sale_data add(const Sales_data&,const Sales_data&);
std::ostream &print(std::ostream&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&);
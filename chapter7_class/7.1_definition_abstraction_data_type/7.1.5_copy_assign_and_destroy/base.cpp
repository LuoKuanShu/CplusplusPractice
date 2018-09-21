#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

struct My_vector {
	//constructor
	My_vector()=default;
	My_vector(const initializer_list<string> &items):datas(items) { }
	My_vector(istream&);
	

	//member function
	const vector<string>& getDatas() const { return datas; }
	vector<string>& getDatas() {return datas;}
	unsigned getSize() const { return datas.size(); }

	vector<string> datas{"welcome to my world"};
};
//declaration
ostream &print(ostream&,const My_vector&);
istream &read(istream&,My_vector&);

//non-member function definition
ostream &print(ostream &my_cout,const My_vector &item){
	for (const auto s : item.getDatas()) {
		my_cout << s << " ";
	}

	return my_cout;
}

istream &read(istream &my_cin,My_vector &item) {
	cout << "enter some words: " << endl;

	auto &d = item.getDatas();
	string temp;
	if (!my_cin) {
		cout << "no datas.";
		return my_cin;
	}
	while (my_cin >> temp) {
		d.push_back(temp);
	}

	return my_cin;
}

//constructor define
My_vector::My_vector(istream &my_cin) {
	read(my_cin,*this);
}

int main(void) {
	My_vector d {"love you"};
	print(cout,d);
	cout << d.getSize();

	My_vector m = d;
	print(cout,m);
}

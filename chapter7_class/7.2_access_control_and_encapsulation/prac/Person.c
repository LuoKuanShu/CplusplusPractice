#include <iostream>

using namespace std;

class Person {

//constructor
public:
	Person()=default;
	Person(const string &n):name(n) { }
	Person(const string &n,const string &a):name(n),address(a) { }
	Person(istream&);

//get/set
public:
	string getName() const { return name;}
	string getAddress() const;
	Person &setName(const string &n) { name = n; return *this; }
	Person &setAddress(const string &a) {address = a; return *this; }
//data
private:
	std::string name = "unknow";
	std::string address = "unknow";
};

//definition getAddress func.
string Person::getAddress() const { return address; }


//declaration non-member func read and print
istream &read(istream&,Person&);
ostream &print(ostream&,const Person&);

//definition
istream &read(istream &m_cin,Person &item){
	cout << "enter name and address: " << endl;
	
	string t_name,t_address;

	m_cin >> t_name >> t_address;
	item.setName(t_name).setAddress(t_address);

	cout << "read success." << endl;

	return m_cin;
}

ostream &print(ostream &m_cout,const Person &item){
	
	m_cout <<  "name: " << item.getName() << " " << "address: " << item.getAddress() << endl;
	cout << "success" << endl;

	return m_cout;
}

Person::Person(istream &my_cin){
	read(my_cin,*this);
}

#include <iostream>

using namespace std;

struct Person {
	string getName() const { return name;}
	string getAddress() const;

	std::string name;
	std::string address;	
};

//definition getAddress func.
string Person::getAddress() const { return address; }

//declaration non-member func read and print
istream &read(istream&,Person&);
ostream &print(ostream&,const Person&);

//definition
istream &read(istream &m_cin,Person &item){
	cout << "enter name and address: " << endl;
	m_cin >> item.name >> item.address;

	cout << "read success." << endl;

	return m_cin;
}

ostream &print(ostream &m_cout,const Person &item){
	m_cout <<  "name: " << item.getName() << " " << "address: " << item.getAddress() << endl;
	cout << "success" << endl;

	return m_cout;
}

#include <iostream>

using namespace std;

class Person {

//friend declaration
friend istream &read(istream&,Person&);
friend ostream &print(ostream&,const Person&);


//constructor
public:
	Person()=default;
	Person(const string &n):name(n) { }
	Person(const string &n,const string &a):name(n),address(a) { }
	Person(istream&);


//member func
public:
	string getName() const { return name; }
	string getAddress() const { return address; }
//data
private:
	std::string name = "unknow";
	std::string address = "unknow";
	bool is_init = false;   //control a obj only init once by read func.
};



//declaration non-member func read and print
istream &read(istream&,Person&);
ostream &print(ostream&,const Person&);

//definition
istream &read(istream &m_cin,Person &item){
	if (!item.is_init) {
		m_cin >> item.name >> item.address;
		cout << "read success." << endl;
		item.is_init = true;
	}else {
		cout << "sorry,data only can init once." << endl;
	}

	return m_cin;
}

ostream &print(ostream &m_cout,const Person &item){
	
	m_cout <<  "name: " << item.name << " " << "address: " << item.address << endl;
	cout << "success" << endl;

	return m_cout;
}

Person::Person(istream &my_cin){
	read(my_cin,*this);
}

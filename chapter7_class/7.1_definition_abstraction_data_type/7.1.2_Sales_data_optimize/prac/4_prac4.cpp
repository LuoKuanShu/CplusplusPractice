#include <iostream>

using namespace std;

//definition Person
struct Person {
	//data
	std::string name;
	std::string address;

	//member function definition
	const std::string &getName(){
		return name;
	}
	const std::string &getAddress() {
		return address;
	}
	
	void setName(const string &name){
		this->name = name;	
	}
	
	void setAddress(const string &address){
		this->address = address;
	}
};

int main(void){
	Person man;
	man.name = "manson";
	man.address = "china";

	cout << "man's name is: " << man.getName() << endl;
	cout << "man's address is: " << man.getAddress() << endl;
	
	man.setName("tom");

	cout << "man's name is: " << man.getName() << endl;
	cout << "man's address is: " << man.getAddress() << endl;
}
#include <iostream>

using namespace std;

struct Person {
	std::string getName() { return name; }
	std::string getAddress() { return address; }

	std::string name;
	std::string address;	
};

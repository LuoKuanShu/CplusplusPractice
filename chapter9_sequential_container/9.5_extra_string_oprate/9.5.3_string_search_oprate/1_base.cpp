#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(void) {

	string str("China");
	auto res = str.find("Ch");
	//assert(res == 0);


	//careful lowercase and uppercase
	string lower_case = "anna";
	res = lower_case.find("ANNA");
	//cout << res << endl;
	//assert(res == string::npos);


	//find char according specific char sequeces,return the first pos the it occurs.
	str = "Anna's phone number: 12306.";
	string item = "0123456789";
	//this mean the pos first occur the mumeric.
	res = str.find_first_of(item);
	cout << str[res] << endl;  // 1



	//find first char that not number.
	str = "145689 people dead in this accident.";
	item += " ";
	res = str.find_first_not_of(item);
	cout << str[res] << endl;  // "p"

}

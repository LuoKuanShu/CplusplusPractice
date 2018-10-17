#include <iostream>
#include <string>

using namespace std;

int main(void) {
	//
	//convert value to string.
	int i = 78;
	cout << "we have " + to_string(i) + " apples" << endl;

	double price = 56.4;
	cout << "this pair of shoes seld " + to_string(price) + " dollars,that's too expensive." << endl;



	//convert string to value.
	//string to int
	string str = "34";
	cout << 5 + stoi(str) <<  endl;
	str = "have " + str + "apples";
	auto pos = str.find("34");
	cout << 5 + stoi(str, str.begin() + pos, str.begin() + pos + 2) << endl;
}

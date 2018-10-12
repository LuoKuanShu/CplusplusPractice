
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> vs{"love","you","forever"};

	//get first element
	//use iterator
	auto ibeg = vs.begin();
	cout << *ibeg << endl;
	//use member func front
	auto value = vs.front();
	cout << value << endl << endl; //it is a copy of last element

	

	//get last element
	//use iterator
	auto iend = vs.end();
	cout << *iend << endl;
	//use member func back()
	auto last_value = vs.back();
	cout << last_value << endl;



}

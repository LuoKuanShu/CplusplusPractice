#include <iostream>
#include <string>

using namespace std;

string::const_iterator find_str( const  string& str, const string &item );

int main(void) {
	
	string s =  "leafs";
	string s2 = "ea";
	auto iter = find_str(s,s2);
	cout << *iter << endl;
}


string::const_iterator find_str( const string& str, const string& item ) {
	//if item longer than str
	if (str.size() < item.size())
		cout << "in if statement."  << endl;
		return str.cend();
	for (auto ibeg = str.begin(); ibeg != str.end() - item.size(); ++ibeg) {
		if (equal(ibeg, ibeg + item.size(), item.begin()))  //compare two data range that has the same length.
			return ibeg;

	}


	return str.end();

}

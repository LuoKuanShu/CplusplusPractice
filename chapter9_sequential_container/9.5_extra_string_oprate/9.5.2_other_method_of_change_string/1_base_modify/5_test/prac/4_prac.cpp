#include <iostream>
#include <string>

/*
 * translate(string s1,string beg, string end);
 * output:
 *      beg  + s1 + end;
 *
 */

using namespace std;

string& translate( string &str, const string &beg, const string &ends );

int main(void) {
	string str = "MansonLuo";
	string beg = "Mr.";
	string ends = " Jr.";

	auto res = translate(str, beg, ends);
	cout << res << endl;

}


string& translate( string &str, const string &beg, const string &ends ) {
	//insert to the begining.
	str.insert( 0, beg);

	//insert to the end.
	str.insert(str.size(), ends);

	return str;

}

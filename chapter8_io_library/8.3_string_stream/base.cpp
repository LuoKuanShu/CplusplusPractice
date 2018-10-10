#include <iostream>
#include <sstream>
#include <fstream>
#include <cctype>

using namespace std;

int main(void) {
	string s;
	ifstream input;

	input.open("test");
	getline(input,s);

	//mainipulate the copy of s
	//read s
	istringstream is(s);
	char c = ' ';
	while (is >> c) {
		//the is discard the blank space.
		cout << c;
	}
	cout << endl;

	ostringstream out(s);
	//will override s's content
	out << endl << "this is the last line." << endl;
	cout << "the result using out.str(): " << out.str() << endl;
	string res;
	//.str() only can use one time.
	out.str(res);
	cout << "res using out.str(res): " << res << endl;


	//
	istringstream is2(s);
	unsigned count = 0; //use to count how many white space is.
	while (is2 >> c) {
		isspace(c)? ++count : 0;

	}	
	cout << "there are " << count << "white space." << endl;
}

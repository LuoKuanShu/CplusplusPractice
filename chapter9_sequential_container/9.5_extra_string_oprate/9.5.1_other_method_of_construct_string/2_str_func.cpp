#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s("love you forever.");

	string s1 = s.substr(); //love you forever.
	cout << s1 << endl << endl;

	string s2 = s.substr(9); //forever.
	cout << s2 << endl << endl;

	string s3 = s.substr(5,3); //you
	cout << s3 << endl << endl;

}

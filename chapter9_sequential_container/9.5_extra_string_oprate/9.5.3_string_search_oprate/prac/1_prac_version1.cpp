#include <iostream>
#include <string>

/*
 * use find_first_of()
 *
 * input:  "ab2c3d7R4E6"
 *
 * output:
 *    2 3 7 4 6
 *    "abcdR4E6
 */


using namespace std;

int main(void) {
	string str = "ab2c3d7R4E6";
	string item = "0123456789";

	string::size_type pos = 0;
	cout << "found number chars: " << endl;
	while ((pos = str.find_first_of(item, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;
	}
	cout << endl;


	//init item
	item = "abcdRE";
	pos = 0;
	cout << "found char: " << endl;
	while ((pos = str.find_first_of(item, pos)) != string::npos) {
		cout << str[pos] << " ";
		++pos;

	}

	
}

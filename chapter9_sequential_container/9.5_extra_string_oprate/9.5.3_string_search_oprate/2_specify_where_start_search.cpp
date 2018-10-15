#include <iostream>
#include <string>

using namespace std;

void find_all(const string &str, const string &item);

int main(void) {
	//find all pos that a string occurs in specific string.
	string str = "love your love.";
	string item = "love";
	find_all(str,item);

}


void find_all(const string &str, const string &item )  {
	string::size_type pos = 0;

	while ((pos = str.find(item, pos)) != string::npos) {

		cout << "find string " << item << " at index of " << pos << endl;

		++pos;
	
	}
}

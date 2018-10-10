
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v;
	string word;
	ifstream input;

	input.open("f2");
	while (input) {
		word = "";
		input >> word;
		v.push_back(word);
	
	}

	for (auto s : v) {

		cout << s << endl;
	}
}

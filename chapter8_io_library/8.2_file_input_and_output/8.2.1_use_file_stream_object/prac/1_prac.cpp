
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v;
	string line;
	ifstream input;

	input.open("f1");
	while (input) {
		line = "";
		getline(input,line);
		v.push_back(line);
	
	}

	for (auto s : v) {

		cout << s << endl;
	}
}

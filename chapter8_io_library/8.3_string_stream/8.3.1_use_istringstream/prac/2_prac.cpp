
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
	//read from file to generate vector<string> obj to store each line.
	string line;
	vector<string> lines;
	ifstream file_in("f2");

	while (getline(file_in,line)) {
		lines.push_back(line);
	
	}
	file_in.close();

	//use istringstream to read each word in vector.
	for (auto s : lines) {
		string word;
		istringstream is(s);
		while (is >> word) {
			cout << word << " ";
		}
		cout << endl;
		
	}
}

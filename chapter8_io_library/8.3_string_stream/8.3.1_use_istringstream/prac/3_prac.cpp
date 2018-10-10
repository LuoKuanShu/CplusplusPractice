
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(void) {
	string line,word;
	vector<PersonInfo> people;

	//a line data is a item that standing for a PeopleInfo obj.
	
	istringstream record;
	while (getline(cin,line)) {
		PersonInfo info;
		record.str(line); //bind line to record.

		//init info obj
		record >> info.name;
		while (record >> word) {

			info.phones.push_back(word);

		}

		//init people
		people.push_back(info);
	
	}
}

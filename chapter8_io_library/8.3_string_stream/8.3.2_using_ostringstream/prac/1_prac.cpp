
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

//this script can used in comand line.

using namespace std;

bool valid(string s);
string format(string s);

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main(int argc,char **argv) {
	string line,word;
	vector<PersonInfo> people;
	ifstream file_in(argv[1]);  //through command line to read file name.

	//a line data is a item that standing for a PeopleInfo obj.
	while (getline(file_in,line)) {
		PersonInfo info;
		istringstream record(line);

		//init info obj
		record >> info.name;
		while (record >> word) {

			info.phones.push_back(word);

		}

		//init people
		people.push_back(info);
	
	}

	file_in.close();

	//venify the phone numbers of each item,print formatted phone number,and print incorrect-format phone number if exist.
	for (const auto &entry : people) {
		ostringstream formatted,badNums;

		//judge and formate
		for (const auto &nums : entry.phones) {
			if (!valid(nums)) {
				badNums << " " << nums;
			}else {
				formatted << " " << format(nums);
			}
		}
		
		//print responsed data
		if (badNums.str() .empty()) { 
			cout << entry.name << " " << formatted.str() << endl;
		}else {
			cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;
		}
	
	}
}

bool valid(string s) {
	return (s.size() == 12)? true : false;
}

string format(string s) {
	return "+86"+s;
}

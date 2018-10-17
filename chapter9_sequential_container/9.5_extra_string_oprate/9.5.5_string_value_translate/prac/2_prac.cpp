#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Date {

private:
	vector<string> allFormates{"  ", " ,", "//"};

public:
	Date() = default;
	Date(string str) {
		handle(str);
	}

public:
	unsigned year = 2018;
	unsigned month = 10;
	unsigned day = 17; 

private:
	//count how many time the formate char occurrs in string.
	size_t count_func(string str, char ch) {
		size_t count_occurr = 0;
		size_t pos = 0;
		while ( (pos = str.find(ch, pos)) != string::npos) {
			++count_occurr;

			++pos;
		}


		return  count_occurr;
	}

	//if arg match the formate specified by arg2,return true
	bool check(string str, string str_formate ) {

		//each char in formate occurres only one timee
	
		size_t count = 0;

		if (str.size() <= 2) {
			return false;
		}


		for (auto c : str_formate) {
			count = count_func(str, c);
			// "xx/xx/xxx"   or  "xx xx xxxx"
			if (count == 2 && (c == '/'|| c == ' ')) {
				return true;
			}

			if (count != 1) {
				return false;
			}
			
		}

		return true;
	}
	//check the arg which formate it match,return the formate string.
	string matchAll(string arg) {
		for (auto f : allFormates) {
			if (check(arg, f)) {
				return f;
			}
		}
		return " ";	
		
	}

	
	//handle the data according the formate string
	void handle(string arg) {
		string::size_type first = 0, end = arg.size();
		auto formate = matchAll(arg);
	

		//init data
		auto res = arg.substr(0, arg.find(formate[0]));
		auto res2 = arg.substr(arg.find_first_of(formate[0]), arg.find_last_of(formate[1]));
		auto res3 = arg.substr(arg.find_last_of(formate[1]));
		
		day = stoi(res);
		month = stoi(res2);
		year = stoi(res3);
	
	}


private:
	string flag_operate;
	vector<string> data_all;
};



int main(void) {
	Date today("2 18 2018");
	cout << "year: " << today.year << endl;
	cout << "month: " << today.month  << endl;
	cout << "day: " << today.day << endl;

}

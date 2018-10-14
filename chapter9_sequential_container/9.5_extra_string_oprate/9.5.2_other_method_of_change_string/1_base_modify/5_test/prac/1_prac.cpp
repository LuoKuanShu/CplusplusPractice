#include <iostream>
#include <string>

using namespace std;

string::const_iterator find_str( const  string& str, const string &item );
string& replaceAll( string &str,const string &oldVal, const string &newVal );

int main(void) {
	
	string str = "love your love.",oldVal = "love", newVal = "hate";
	const string &res = replaceAll(str, oldVal, newVal);
	cout << res << endl;
}


string::const_iterator find_str( const string& str, const string& item ) {
	//if item longer than str
	if (str.size() < item.size()) {
		return str.cend();
	}

	if (str.size() == item.size()) {  // must deal with this situation.
		auto res = equal(str.begin(), str.begin() + item.size(), item.begin());
		return (res)? str.begin() : str.end();
	}

	for (auto ibeg = str.begin(); ibeg != (str.end() - item.size()); ++ibeg) {
		if (equal(ibeg, ibeg + item.size(), item.begin())) {  //compare two data range that has the same length.
			return ibeg;
		}

	}


	return str.end();

}

string& replaceAll(string &str,const string &oldVal, const string &newVal) {
	while (true) {
		auto res_iter = find_str(str, oldVal);
		if (res_iter == str.end()) {
			return str;
		}
		//a replace operate
		auto ins_iter = str.erase(res_iter,res_iter + oldVal.size());
		str.insert(ins_iter, newVal.cbegin(), newVal.cend());
	}

	return str;

}

#include <iostream>
#include <string>

using namespace std;

size_t find_str( const  string& str, const string &item );
string& replaceAll( string &str,const string &oldVal, const string &newVal );

int main(void) {
	
	string str = "love your love.",oldVal = "love", newVal = "hate";
	const string &res = replaceAll(str, oldVal, newVal);
	cout << res << endl;
}


size_t find_str( const string& str, const string& item ) {
	//if item longer than str
	if (str.size() < item.size()) {
		return str.size();
	}

	if (str.size() == item.size()) {  // must deal with this situation.
		auto res = equal(str.begin(), str.begin() + item.size(), item.begin());
		return (res)? 0 : str.size();
	}

	for (auto ibeg = str.begin(); ibeg != (str.end() - item.size()); ++ibeg) {
		if (equal(ibeg, ibeg + item.size(), item.begin())) {  //compare two data range that has the same length.
			return str.find(*ibeg);
		}

	}


	return str.size();

}

string& replaceAll(string &str,const string &oldVal, const string &newVal) {
	while (true) {
		auto res_pos = find_str(str, oldVal);
		if (res_pos == str.size()) {
			return str;
		}
		//a replace operate
		str.replace(res_pos,res_pos + oldVal.size(), newVal);
	}

	return str;

}

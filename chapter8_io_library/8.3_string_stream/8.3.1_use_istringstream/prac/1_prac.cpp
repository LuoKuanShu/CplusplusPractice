#include <iostream>
#include <sstream>

using namespace std;

istream& io(istream&);

int main(void) {
	string s = "i love you,\nlove you so much.";
	istringstream is(s);
	io(is);
}

istream& io(istream &in) {
	string line,res;

	while (getline(in,line)) {
		res += line + "\n";
	}

	cout << res << endl;
	in.clear();
	return in;
}


#include <iostream>

using namespace std;

void what(istream&);

int main(void) {
	int i;
	cin >> i;
	what(cin);
}

void what(istream &in) {
	auto state = cin.rdstate();

	switch (state) {
		case cin.goodbit:
			cout << "goodbit" << endl;
			break;
		case cin.badbit:
			cout << "babit" << endl;
			break;
		case cin.eofbit:
			cout << "eofbit" << endl;
			break;
		case cin.failbit:
			cout << "failbit" << endl;
			break;

	}
}

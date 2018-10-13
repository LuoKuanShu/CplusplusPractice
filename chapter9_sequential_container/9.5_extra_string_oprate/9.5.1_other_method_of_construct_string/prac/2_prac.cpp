#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	s.reserve(100);
	for (size_t i = 0;i != 100;++i) {

		s.push_back('l');
	}

	cout << s << endl;

}

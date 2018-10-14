#include <iostream>
#include <string>

using namespace std;

int main(void) {
	const char *datas = "love you forever.";

	string s;
	s.assign(datas,4);
	cout << s << endl;  //love

	s.insert(s.size(),datas + 4);
	cout << s  << endl; // love you forever
	
}


#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(void) {
	string s,res;
	while (getline(cin,s)) {
		res += s + "\n";
		
	}
	cout << res << endl;
}

#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s = "i love you.";
	decltype(s.size()) index = 0;

	while (index < s.size()){
		auto &rc = s[index];
		rc = 'X';
		++index;

	}
	cout << s << endl;
}

#include <iostream>
#include <string>

using namespace std;


int main(void){
	string s = "i love you";
	int i;

	//local variable must be initialized.
	for (decltype(s.size()) index = 0;index < s.size();++index){
		s[index] = 'X';

	}
	cout << s << endl;
}

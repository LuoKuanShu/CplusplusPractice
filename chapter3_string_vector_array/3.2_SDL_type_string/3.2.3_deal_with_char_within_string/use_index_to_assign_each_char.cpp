#include <iostream>
#include <string>

using namespace std;

int main(void){
	//upper all chars of first word with a statement.
	string s;
	cout << "enter a statement: " << endl;
	getline(cin,s);

	for (decltype(s.size()) index;index != s.size() && !isspace(s[index]);++index){
		s[index] = toupper(s[index]);
	}

	cout << s << endl;

}

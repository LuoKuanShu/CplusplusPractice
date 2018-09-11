#include <iostream>

using namespace std;

int main(void){
	typedef char *pstring;
	
	char c = 'a';

	const pstring cstr = &c;
	const pstring *ps;

	ps = &cstr;

	cout << *cstr << " " 
		<< **ps 
		<< endl;

}


#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s("coco2d");
	//append a char
	s.push_back('s');
	cout << s << endl;
	
	//can't append string or c-styled-string
	//s.push_back("es");
	//cout << s << endl;
}

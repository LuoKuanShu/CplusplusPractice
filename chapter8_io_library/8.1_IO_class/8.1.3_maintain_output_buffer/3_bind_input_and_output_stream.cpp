
#include <iostream>

using namespace std;

int main(void) {
	//cin,return pointer to cout.
	auto p_cout = cin.tie();
	(*p_cout) << "hello" << endl;

	//bind cin to a pointer to null.
	//then cin.tie() return a pointer to null.
	ostream *p_n = NULL;
	cin.tie(p_n);
	auto p = cin.tie();
	//(*p) << "hello" << endl;  //this will raise Segmentation fault.


	//use cin.tie(arg)
	cin.tie(&cerr);

}

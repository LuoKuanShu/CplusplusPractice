
#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	fstream f_io;
	f_io.open("test");
	f_io << "first" << endl;
	f_io.close();

	f_io.open("test");
	f_io << "second" << endl;
	f_io.close();
	//is content of test second rather than first second?
	//is second.
	//the content is trunced cause not specify the app mode.
	

	f_io.open("test",fstream::out | fstream::in);
	f_io << "third" << endl;
	f_io.close();	
	//specify in and out,but didn't work.
}


#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ofstream out;

	out.open("test",ofstream::out | ofstream::in);
	out << "this data will be kept." << endl;
	out.close(); //doesn't work.

	out.open("test",ofstream::in);
	out << "last line." << endl;
	out.close();
	//also doesn't work.
}

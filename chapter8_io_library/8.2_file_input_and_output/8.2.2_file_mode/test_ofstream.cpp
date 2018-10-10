
#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ofstream out;

	out.open("test");
	out << "default mode that is out." << endl;
	out.close();

	out.open("test",ofstream::app);
	out << "specify mode app,that equals to out plus app." << endl;
	out.close();
}

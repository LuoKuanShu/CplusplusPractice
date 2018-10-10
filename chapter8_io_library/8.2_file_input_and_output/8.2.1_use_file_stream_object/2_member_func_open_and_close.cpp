

#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	//before using file stream,we must check it whether valid.
	fstream file;
	string str_f("file2");

	file.open(str_f + "1");
	if (!file) {
		cout << "failed open." << endl;
		return;
	}
	file << "hello" << endl;

	//we bind another file before closing current file.
	file.close();
	file.open(file + "2");
	file << "hello" << endl;

	file.close();

}

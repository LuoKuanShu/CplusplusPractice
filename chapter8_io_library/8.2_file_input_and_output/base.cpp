
#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	string str_file("output.txt");

	//declaration a ofstream but bind nothing.
	ofstream file_out;
	//bind it to output.txt,return void
	file_out.open(str_file);
	//use it
	file_out << "hello world." << endl << "hello my lover." << endl;
	cout << (file_out.is_open()? "file not close." : "file has closed.") << endl;
	file_out.close();
	cout << (file_out.is_open() ? "not closed." : "has closed.") << endl;


	//read file using ifstream i(file)
	//that's meaning declarate a ifstream while opening a specific file.
	ifstream file_in(str_file);
	string content;
	file_in >> content;
	cout << "read file using input operation symbol: " << endl;
	cout << "the content: " << content << endl;
	cout << "setup ifstream." << endl;
	//make file_in reuse.
	//but to my surprise,it doesn't read file from file header after using file_out.clear().
	//that's comfusing.
	file_in.clear();
	getline(file_in,content);
	cout << "read file using getline(arg,arg):" << endl;
	cout << "the content: " << content << endl;
	file_in.close();



	//specify the file mode.
	cout << endl << "file mode: " << endl;
	string str_file_io("file.txt");
	//write to file
	fstream file(str_file_io,fstream::out);
	file << "a world." << endl;
	//although i just  specify the out mode,i can read from it,maybe because i use fstream rather than ifstream or ofstream.
	file >> content;
	cout << content << endl;
	//file = NULL; //incorrect.
	
	file.close();	



}

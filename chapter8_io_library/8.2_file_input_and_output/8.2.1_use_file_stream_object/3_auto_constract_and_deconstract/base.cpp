
#include <iostream>
#include <fstream>

//this script will combine all content of each file to a specific final file.

using namespace std;

int main(int argc,char **argv) {
	string content,f_content;

	for (auto p = argv + 1;p != argv + argc - 1;++p) {
		ifstream input(*p);
		if (input) {
			input >> content;
			f_content += "\n" + content;
			input.close();		
		}else{
			cerr << "couldn't open file " << *p << endl;
		}
	}	

	cout << "input success." << endl;

	//write to final.txt
	//actually argv + argc is a pointer to null
	ofstream output(*(argv + argc - 1));
	cout << (*(argv + argc-1)) << endl;

	
	if (output) {
		output << f_content;
		output.close();
	}else
		cout << "couldn't open file " << * (argv + argc) << endl;
	

}

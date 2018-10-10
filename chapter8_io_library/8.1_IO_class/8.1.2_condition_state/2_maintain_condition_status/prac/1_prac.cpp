#include <iostream>
#include <fstream>


using namespace std;

istream& test(istream&);

int main(void) {
	ofstream o;
	o.open("test.txt");
	o << "I love you forever." << endl;
	o.close();
	ifstream i;
	i.open("test.txt");

	auto &f = test(i);
	cout << endl;
	cout << "is the current state is good? " << f.good() << endl;


}

istream& test(istream &in) {
	string res;
	string word; 
	
	while (true) {
		if ((in.rdstate() & ifstream::eofbit) != 0) {
			cout << "it's eofbit." << endl;
			break;
		}else{
			if (in >> word) {
				res += word + " ";

			}
		}
	}
	cout << "the result is " << res << endl;
	in.clear();
	return in;
}


#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

//remove the words Tom said,keep " and " symble.

void print(vector<char>);
int main(void) {
	

	string s = "Tom said:\"i love you forever\".";
	vector<char> words(s.begin(),s.end());
	string flag = "beg";
	auto ibeg = words.begin();
	decltype(ibeg) beg,ends;  //keep iterator to symbol ".must be a ref
	//above ref not init,so dicard it,use static var.
	print(words);

	//init beg and ends
	while (ibeg != words.end()){ //element is char type
		if ((*ibeg == '"') && flag == "beg") {
			beg = ibeg;
			++ibeg;
			flag = "ends"; 
			
		}else if ((*ibeg == '"') && (flag == "ends")) {
			ends = ibeg;
			flag = "  ";
			++ibeg;
			//break;  //done init beg and ends
		}

		++ibeg;
	}

	//erase words
	words.erase(++beg,ends);
	print(words);

}

void print(vector<char> item) {
	for (auto i : item) {
		cout << i << " ";

	}
	cout << endl << endl;
}

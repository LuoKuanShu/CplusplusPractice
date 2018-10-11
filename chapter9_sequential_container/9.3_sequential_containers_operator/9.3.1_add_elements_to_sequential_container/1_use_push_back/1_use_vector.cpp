
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	string word;
	vector<string> v;

	cout << "enter words: " << endl;
	while (cin >> word) {
		v.push_back(word);
	
	}

	for (auto w : v) {
		cout << w << " ";
	}
	cout << endl;

}

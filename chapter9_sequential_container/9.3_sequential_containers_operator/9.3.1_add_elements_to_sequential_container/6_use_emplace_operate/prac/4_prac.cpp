
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v;
	string word;
	auto iter = v.begin();
	while (cin >> word) {
		iter = v.insert(iter,word);
	}


	for (auto w : v) {
		cout << w << " ";
	}
	cout << endl;
}

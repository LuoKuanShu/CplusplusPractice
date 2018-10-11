
#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	deque<string> words;
	string s;

	cout << "enter several words: " << endl;
	while (cin >> s) {
		words.push_back(s);
	}

	for (auto a : words) {
		cout << a << " ";
	
	}
	cout << endl;

}

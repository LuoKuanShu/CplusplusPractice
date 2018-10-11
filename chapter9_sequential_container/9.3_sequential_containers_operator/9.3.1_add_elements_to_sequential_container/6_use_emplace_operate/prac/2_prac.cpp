
#include <iostream>
#include <list>

using namespace std;

int main(void) {
	list<string> words;
	string s;

	cout << "enter several words: " << endl;
	while (cin >> s) {
		words.insert(words.end(),s);
	}

	for (auto a : words) {
		cout << a << " ";
	
	}
	cout << endl;

}

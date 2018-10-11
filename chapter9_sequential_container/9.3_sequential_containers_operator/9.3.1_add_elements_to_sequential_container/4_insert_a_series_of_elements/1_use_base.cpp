
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v;

	//append ten apple
	v.insert(v.end(),10,"apple");
	for (auto a : v) {
		cout << a << " ";
	}
	cout << endl;

}

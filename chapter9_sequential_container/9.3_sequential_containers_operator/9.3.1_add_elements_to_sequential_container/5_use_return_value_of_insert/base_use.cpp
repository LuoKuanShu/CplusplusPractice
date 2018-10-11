
#include <iostream>
#include <list>

using namespace std;

int main(void) {
	list<string> lst;
	string word;
	auto iter = lst.begin();

	cout << "enter datas: " << endl;
	while (cin >> word) {
		iter = lst.insert(iter,word);
	}

	for (auto s : lst) {
		cout << s << " ";
	}
	cout << endl << endl;	

}

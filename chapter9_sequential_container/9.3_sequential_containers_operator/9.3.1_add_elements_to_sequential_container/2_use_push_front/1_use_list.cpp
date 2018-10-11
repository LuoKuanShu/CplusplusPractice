
#include <iostream>
#include <list>

using namespace std;

int main(void) {
	list<int> ilist;

	for (size_t index = 0;index != 4;++index) {
		ilist.push_front(index);
	}

	//3 2 1 0
	for (auto i : ilist) {
		cout << i << " ";
	
	}

	cout << endl;
}

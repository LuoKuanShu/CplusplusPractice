
#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	deque<int> datas;

	for (size_t index = 0;index != 7;++index) {
		datas.push_front(index);
		datas.push_back(index);
	}

	for (auto i : datas) {
		cout << i << " ";
	}
	cout << endl;
}

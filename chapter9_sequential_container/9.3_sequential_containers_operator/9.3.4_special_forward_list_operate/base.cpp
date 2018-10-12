
#include <iostream>
#include <forward_list>

using namespace std;

int main(void) {
	forward_list<int> data{1,2,3,4,5,6,7,8,9};
	auto pre = data.before_begin();
	auto curr = data.begin(); //represent the data mainipulating.

	while (curr != data.end()) {
		if (*curr % 2) {
			curr = data.erase_after(pre);
		}else {
			++pre;
			++curr;
		}
	}

		for (auto i : data) {
			cout << i << " ";

		}
		cout << endl;
	
}

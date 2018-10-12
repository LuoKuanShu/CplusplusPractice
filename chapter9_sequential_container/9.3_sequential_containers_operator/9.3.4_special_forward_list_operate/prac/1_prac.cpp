
#include <iostream>
#include <forward_list>

using namespace std;

int main(void) {
	forward_list<int> datas{1,2,3,4,5,6,7,8,9};
	auto pre = datas.before_begin();
	auto curr = datas.begin();

	while (curr != datas.end()) {
		if (*curr % 2) {
			curr = datas.erase_after(pre);
		}else {
			++pre;
			++curr;
		}
	}

	for (auto i : datas) {

		cout << i << " "; 
	
	}
	cout << endl;
}

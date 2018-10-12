
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int>);

int main(void) {
	vector<int> v{1,3,5};

	
	auto iter = v.begin();

	while (iter != v.end()) {
		if (*iter % 2)
			iter = v.insert(iter,*iter);
		++iter;
		print(v);
	}
}

void print(vector<int> con) {

	for (auto i : con) {
		cout << i << " ";
	}
	cout << endl;
}

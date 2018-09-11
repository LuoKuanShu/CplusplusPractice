#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi{1,2,3,4,5,6,7,8,9};

	auto beg = vi.begin();
	auto end = vi.end() - 1;

	while ( (end - beg) >= 0){
		cout << *beg << " ";
		cout << *end << " ";
		cout << *beg + *end << endl;
		beg = beg + 1;
		end = end - 1;
	}


}

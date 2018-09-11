#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi;

	for (int i = 0;i < 100000;++i){
		vi.push_back(i);

	}
	auto beg = vi.cbegin();
	auto end = vi.cend();
 	auto mid = vi.cbegin() + (end - beg)/2;

	int obj = 99999;

	while (mid != end && *mid != obj){
		if (*mid > obj){
			end = mid;
		}else{
			beg = mid + 1;
		}
		mid = beg + (end - beg)/2;
	}
	cout << *mid << endl;

}

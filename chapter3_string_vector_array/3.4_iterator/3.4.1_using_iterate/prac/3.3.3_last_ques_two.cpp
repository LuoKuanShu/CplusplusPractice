#include <iostream>
#include <vector>

using namespace std;

int main(void){

	vector<int> vi;
	int i = 0;

	while (cin >> i){
		vi.push_back(i);

	}

	auto first = vi.cbegin();
	auto end = vi.cend();
	
	--end;

	while (first <= end){
		cout << *first + *end << " ";
		++first;
		--end;
	}
	
	

	
}

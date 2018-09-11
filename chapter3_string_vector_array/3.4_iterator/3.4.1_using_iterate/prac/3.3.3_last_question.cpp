#include <iostream>
#include <vector>

using namespace std;

int main(void){

	vector<int> vi;
	int i = 0;

	while (cin >> i){
		vi.push_back(i);

	}

	auto iterate = vi.cbegin();
	int pre = 0;
	
	while (iterate != (--vi.cend())){
		pre = *iterate; //save current number;
		++iterate;

		cout << pre + *iterate << " ";

	}
}

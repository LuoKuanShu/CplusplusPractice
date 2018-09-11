#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	auto iterate = vi.begin();

	while (iterate != vi.end()) {
		*iterate = (*iterate) * 2;
		++iterate;
	}
	
	auto iterate_for_read = vi.cbegin();

	while (iterate_for_read != vi.end()){
		cout << *iterate_for_read << " ";
		++iterate_for_read;
	}

}


#include <iostream>
#include <vector>

using namespace std;

using r_itr = vector<int>::reverse_iterator;

int main(void) {
	vector<int> v{1,3,3};
	
	r_itr begs = v.rbegin();
	r_itr ends = v.rend();

	for(;begs != ends;++begs) {
		cout << (*begs) << endl;
	}
	
}

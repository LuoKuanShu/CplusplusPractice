
#include <iostream>
#include <vector>

using namespace std;

using diff = vector<int>::difference_type;
using ci = vector<int>::const_iterator;
using ite = vector<int>::iterator;

int main(void) {
	vector<int> v{1,2,3};

	//use two const iterator to check the vector content.
	ci cbi = v.cbegin();
	ci cei = v.cend();

	for (diff far = cei - cbi,index = 0;cbi + index != cei;++index){ //can't change the cbi and cei
		cout << *(cbi + index) << endl;


	}

	//use const_cast to const iterator beloned to non-const container.
	cbi = v.cbegin();
	cei = v.cend();
	ite bi = const_cast<ite>(cbi);
	ite ei = const_cast<ite>(cei);

	for(;bi != ei;++bi) {
		cout << *bi << endl;
	}
}

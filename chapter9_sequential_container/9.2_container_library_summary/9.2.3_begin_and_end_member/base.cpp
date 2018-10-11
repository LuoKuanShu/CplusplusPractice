
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
	
	//const_cast can't used to iterator,it just support pointer and reference.
	/*
	//use const_cast to const iterator beloned to non-const container.
	cbi = v.cbegin();
	cei = v.cend();
	ite bi = const_cast<ite>(cbi);
	ite ei = const_cast<ite>(cei);

	for(;bi != ei;++bi) {
		cout << *bi << endl;
	}
	*/

	const vector<int> cv(v);
	//auto iter1 = cv.begin();  //const container obj call const member func begin() that return a const_iterator.
	//
	//auto iter2 = v.begin();  //call non-const member function begin() that return a non-const iterator.

	//cout << *(++iter1) << endl;  //we can't modify the value that const_iterator specified,but we can modify const_iterator itself to make it bind different value.
	
	//vector<int>::const_iterator iter3 = cv.begin();  
	//const auto iter3 = cv.begin();  
	//iter3 = 8;

}

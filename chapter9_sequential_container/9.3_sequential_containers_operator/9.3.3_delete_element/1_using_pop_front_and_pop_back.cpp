
#include <iostream>
#include <vector>
#include <forward_list>
#include <list>

using namespace std;

int main(void) {
	//must check the element romoving is actually prerent,or compiler not check arg is legal or not
	//as same as removing a empty container
	
	vector<int> v{7};

	if(!v.empty()) {
		int s = v.back();
		auto res = find(begin(v),end(v),s);
		//func find:if find,return iterator to this ele,or return iterator to after last element.
		if(res !=end(v)) { //element must exist
			v.pop_back();	
		}
	}

	cout << v.size() << endl;

}


#include <iostream>
#include <list>

using namespace std;

int main(void) {
	list<int> lst {0,1,2,3,4,5,6,7,8,9};


	cout << "before: " << endl;
	for (auto i : lst) {
		cout << i << " ";
	}
	cout << endl << endl;


	auto it = lst.begin();
	
	while (it != lst.end()) { //keep container not empty.
		if (*it % 2) {
			it = lst.erase(it); //update it 

		}
		else {
			++it;
		}
	}
	cout << "after: " << endl;
	for (auto i : lst) {

		cout << i << " ";
	}
	cout << endl;

}

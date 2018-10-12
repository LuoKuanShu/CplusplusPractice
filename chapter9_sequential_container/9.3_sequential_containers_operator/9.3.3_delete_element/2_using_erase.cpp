
#include <iostream>
#include <vector>

using namespace std;

//must check before removing element


int main(void) {
	vector<int> v{1,23,4,5,6,6};

	//remove one element
	cout << "size: " << v.size() << endl;
	cout << "first ele: " << v.front() << endl;
	v.erase(v.begin());
	cout << "size: " << v.size() << endl;
	cout << "first element: " << v.front() << endl;
	

	cout << endl;
	//remove multi element
	cout << "last element: " << v.back() << endl;
	v.erase((v.begin()+2),v.end());
	cout << "last element: " << v.back() << endl;
	cout << "size: " << v.size() << endl;
}


#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v1 {1,3,5,7,9,12};
	vector<int> v2 {1,3,9};
	vector<int> v3 {1,3,5,7};
	vector<int> v4 {1,3,5,7,9,12};

	cout << (v1 < v2) << endl; //true
	cout << (v1 < v3) << endl; // false
	cout << (v1 == v4) << endl; //true
	cout << (v1 == v2) << endl; //false

}

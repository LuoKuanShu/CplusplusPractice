
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	//two way to vist any pos ele
	//at() and index vist
	//index vist won't check error will out of range.
	//but at() will raise out_of_range error
	

	vector<string> v;
	//cout << v[0]; //compiler not check.
	cout << v.at(0) << endl;
}

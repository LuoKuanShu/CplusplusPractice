
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void) {
	list<int> Li{1,2};
	vector<double> v(Li.begin(),Li.end());

	auto ibeg = v.begin(),iend = v.end();
	for (;ibeg != iend;++ibeg) {
		//result is 1 2,not 1.0,2.0
		cout << *ibeg << " ";

	}
	cout << endl;

	
	vector<int> v1{1,3};
	vector<double> v2(v1.begin(),v1.end());
	ibeg = v2.begin(),iend = v2.end();

	for (;ibeg != iend;++ibeg) {
		cout << *ibeg << " ";
	}
	cout << endl;
}

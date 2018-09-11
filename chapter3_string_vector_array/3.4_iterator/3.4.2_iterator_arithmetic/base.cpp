#include <iostream>
#include <vector>

using namespace std;


int main(void){
	vector<int> vi{1,2,3,4,5,6,7,8,9};
	auto ci = vi.cbegin();

	cout << *ci << endl;
	auto ci2 = ci + 4;
	cout << ci2 - ci << endl;


}

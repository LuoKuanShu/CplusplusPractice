#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi(20);
	vector<int> vi2(4,10);	
	vector<int> vi3(vi2);
	vector<int> vi4 = vi;

	vector<int> v = {1,2,4};
	vector<int> v2{45,3};
	for(auto ri2 : v2){
		cout << ri2 << endl;
	}

}

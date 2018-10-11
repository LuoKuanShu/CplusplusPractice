]
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v1; //zero 0
	vector<int> v2 {1,3,3};
	vector<int> v3(v2);
	vector<int> v4(v3.begin(),v3.begin() - 1);
	vector<int> v5(5); // five 0
	vector<int> v6(8,9); //eight 9
}

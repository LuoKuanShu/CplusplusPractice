
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v{1,2,3};

	//using value_type
	vector<int>::value_type item = 5;
	v.push_back(item);

}


#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	//container.erase(ite1,ite2)
	//if ite1 == ite2
	

	vector<string> v{"big","small"};

	auto iter1 = v.end(),iter2 = iter1;
	
	v.erase(iter1,iter2);
	cout << v.size();

	v.push_back("end");


	iter1 = v.begin() + 1;
	iter2 = iter1;

	v.erase(iter1,iter2);
	cout << v.size();

}

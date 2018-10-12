
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v_have{"s"};

	//check before vist using iterator or member func
	
	if (!v_have.empty()) {
		cout << v_have.front() << " " << v_have.back() << endl;
	
	}


	vector<string> v_none;

	//folow compile ok,but can't run1
	//no checking
	
	//then will raise segmentation fault
	//cause front back return a reference.
	//cout << v_none.front();
	

	//raise segmentation fault while using iterator visting empty conainer.
	cout << *v_none.begin() << endl;
}

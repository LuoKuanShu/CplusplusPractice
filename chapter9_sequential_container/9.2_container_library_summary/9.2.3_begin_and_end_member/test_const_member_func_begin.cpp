
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	const vector<int> cv{1,3,5};

	//this time ci is a const_iterator,auto doesn't remove te const charactor,but we specify the const at head.
	//const auto ci = cv.begin();
	//*ci = 8;  //can't modify through const_iterator.
	

	//ci is a const_iterator
	//vector<int>::const_iterator ci = cv.begin();
	//*ci = 8; //can't modify through const_iterator


	

	//iter is a const_iterator,auto doesn't remove its const charator.
	//auto iter = cv.begin();
	//*iter = 8;  //can't modify

	//cout << *iter << endl;
}

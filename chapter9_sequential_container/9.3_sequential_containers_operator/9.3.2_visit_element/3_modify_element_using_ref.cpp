
#include <iostream>
#include <vector>

using namespace std;

//cause front and back member func return a reference,so we can modify element using it.
//but we just can modify first and last element

int main(void) {
	vector<string> v{"from","everywhere"};

	cout << "first: " << endl;
	cout << "	" << v.front() << endl;
	//specific ref while using auto
	auto &ref_first = v.front();
	ref_first = "Begin";
	cout << "	" << v.front() << endl;



	cout << "last: " << endl;
	cout << "	" << v.back() << endl;
	//just a copy without spcifying ref
	auto last = v.back();
	last = "End"; //not influence container
	cout << "	" << v.back() << endl;

}

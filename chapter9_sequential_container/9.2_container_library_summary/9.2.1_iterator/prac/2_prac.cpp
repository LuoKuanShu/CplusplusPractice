
#include <iostream>
#include <vector>

using namespace std;

//find the specific value between two iterator

bool find(std::vector<int>::iterator,std::vector<int>::iterator,int);

int main(void) {
	vector<int> v{1,2,3};

	cout << (find(v.begin(),v.end(),9)? "has finded" : "have not found") << endl;
}

bool find(std::vector<int>::iterator ite_beg,std::vector<int>::iterator ite_end,int value) {
	if (ite_beg == ite_end) {
		cerr << "error range." << endl;
		return false;
	
	}

	for (;ite_beg != ite_end;++ite_beg) {
		if ((*ite_beg) != value) {
			continue;
		}else {
			break;
		}
	
	}

	if (ite_beg != ite_end) {
		return true;
	}else if ((*ite_beg) == value) {
		return true;
	}else{
		return false;
	}

	return false;
}

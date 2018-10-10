
#include <iostream>
#include <vector>

using namespace std;

//find the specific value between two iterator

using vct = std::vector<int>::iterator;

vct find(vct,vct,int);

int main(void) {
	vector<int> v{1,2,3};

	auto ite = find(v.begin(),v.end(),9);
	cout << (*ite) << endl;
}

vct find(vct ite_beg,vct ite_end,int value) {
	if (ite_beg == ite_end) {
		cerr << "error range." << endl;
		return ite_end;
	
	}

	for (;ite_beg != ite_end;++ite_beg) {
		if ((*ite_beg) != value) {
			continue;
		}else {
			break;
		}
	
	}

	if (ite_beg != ite_end) {
		return ite_beg;
	}else if ((*ite_beg) == value) {
		return ite_beg;
	}else{
		return ite_end;
	}

	return ite_end;
}

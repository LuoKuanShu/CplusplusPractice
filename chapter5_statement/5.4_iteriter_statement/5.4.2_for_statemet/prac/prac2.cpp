#include <iostream>
#include <vector>

using namespace std;

void cmp_swap(vector<string> &big,vector<string> &small);  //compare their size and swap echo other.
void is_prex(vector<string> base,vector<string> prex);


int main(void){
	vector<string> big{"i","am","so","sorry"},
		small{"i","am","so","sorry",",","i","can't","waiting","for","for","you"};
	is_prex(big,small);
}

void cmp_swap(vector<string> &big,vector<string> &small){
	vector<string> temp;

	temp = big;

	if (big.size() < small.size()){
		small = big;
		big = temp;

		cout << "swap scuccess." << endl;
		return;
	}

	cout << "nothing happened." << endl;
	return;
}

void is_prex(vector<string> base,vector<string> prex){
	cmp_swap(base,prex);

	decltype(prex.size()) sz = prex.size();
	decltype(prex.size()) i = 0;

	for (/* */;i <= sz;++i){
		if (base[i] != prex[i]){
			break;
		}
	}

	if (i >= sz){
		cout << "there're a prex." << endl;
		return;
	}

	cout << "there're no prex." << endl;
}


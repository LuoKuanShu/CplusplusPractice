#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi;
	int grade = 0;
	vector<int> res(11,0);

	while (cin >> grade){
		vi.push_back(grade);
	}

	auto iterate = vi.cbegin();
	auto res_iter = res.begin();
		
	while (iterate != vi.cend()){
		int index = *iterate/10 - ( res_iter - res.cbegin());  //index in fact.big than 0 if index big than res_iter.
		res_iter += index;  //move.
		*res_iter = ++(*res_iter); //record
		iterate += 1;
	}

	auto iter = res.cbegin();

	while (iter != res.cend()){
		cout << *iter << " ";
		iter += 1;
	}
}

#include <iostream>
#include <vector>

using namespace std;

int main(void){

	int i = 0;
	vector<int> vi;

	while (cin >> i){
		
		vi.push_back(i);
	}

	
	for (int i = 0;i < (vi.size())/2;++i){
		cout << vi[i] + vi[vi.size() - 1 - i] << " ";	
	}

}

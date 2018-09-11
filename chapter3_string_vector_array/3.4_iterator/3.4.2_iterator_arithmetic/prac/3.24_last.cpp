#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> vi;
	int i = 0;

	while (cin >> i){
		vi.push_back(i);

	}

	auto ci = vi.cbegin();
	for (int i = 0;i < vi.size() - 1;++i){
		 cout << *ci + (*(ci + 1)) << " ";
		 ci += 1;
	}
	return 0;
}

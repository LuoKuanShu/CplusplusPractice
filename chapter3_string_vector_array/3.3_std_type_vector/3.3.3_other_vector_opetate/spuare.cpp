#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int i = 0;
	vector<int> vi;

	cout << " enter a series of int: " << endl;

	while (cin >> i){
		vi.push_back(i);

	}

	for (auto &ri : vi){

		ri *= ri;
	}

	for (auto i : vi){
		cout << i << " ";
	}

}

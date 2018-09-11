#include <iostream>
#include <vector>

using namespace std;


int main(void){
	cout << "enter a series of int separeted by space: " << endl;
		
	int i;
	vector<int> vi;

	while (cin >> i){
		vi.push_back(i);
	}

	cout << vi.size() << endl;
	cout << vi.empty() << endl;

	for (auto i : vi){
		cout << i << endl;

	}

}

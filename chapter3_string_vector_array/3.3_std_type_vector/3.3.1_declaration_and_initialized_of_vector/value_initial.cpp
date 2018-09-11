#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector<int> ri1(4,2);
	vector<string> ri2{5,"hello"};

	for (auto i:ri2){
		cout << i << endl;


	}

}

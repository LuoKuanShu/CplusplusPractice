
#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(void) {
	//a series of data
	list<int> datas{1,33,5,6,67,42,1,2222};

	//fir_datas keep data like 3 5
	//two_datas keep data like 4 8
	deque<int> fir_datas,two_datas;

	for (auto num : datas) {
		((num % 2) == 0)? 
			two_datas.push_back(num) :
			fir_datas.push_back(num);

	}

	//print result
	cout << "single: " << endl;
	for (auto a : fir_datas) {
		cout << a << " ";
	}
	cout << endl << endl;

	cout << "double: " << endl;
	for (auto a : two_datas) {
		cout << a << " ";
	}
	cout << endl;
}

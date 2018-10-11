
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v;

	//append ten apple
	v.insert(v.end(),10,"apple");
	for (auto a : v) {
		cout << a << " ";
	}
	cout << endl;


	//use a pair of iterator reprented the datas
	vector<string> newV;
	//append five apple
	newV.insert(newV.end(),v.begin(),v.end() - 5);

	for (auto a : newV) {
		cout << a << " ";
	}
	cout << endl;


	//use initialize_list to represent data be adding.
	newV.insert(newV.begin(),{"there","are","something","wrong"});
	for (auto a : newV) {
		cout << a << " ";
	}
	cout << endl << endl;
}

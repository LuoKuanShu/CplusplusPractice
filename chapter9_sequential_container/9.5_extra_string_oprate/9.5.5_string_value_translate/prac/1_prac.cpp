#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<string> v_int{"1","45","56"};

	//add ecch value
	int sum = 0;
	for (auto i : v_int) {
		sum += stoi(i);
	}
	cout << "the sum is " << sum << endl;

	double  sum_d = 0;
	for (auto d : v_int) {
		sum_d += stod(d);
	}
	cout << "the sum of double eles is " << sum_d << endl;

}

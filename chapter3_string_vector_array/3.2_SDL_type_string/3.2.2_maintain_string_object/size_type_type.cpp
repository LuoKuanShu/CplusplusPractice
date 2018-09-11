#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(void){
	string s = "love";
	auto num = s.size();
	unsigned n = s.size();

	cout << typeid(s).name() << endl;
	cout << num << endl;
	cout << n << endl;
}

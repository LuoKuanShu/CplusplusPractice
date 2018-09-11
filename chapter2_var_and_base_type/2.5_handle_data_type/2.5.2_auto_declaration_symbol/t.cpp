#include <iostream>
#include <typeinfo>


using namespace std;

int main(void){
	const int ci = 4;
	auto &ri = ci;
	cout << typeid(ri).name() << endl;
	ri = 45;
}

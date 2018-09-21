#include <iostream>

using namespace std;

struct A {
	A() { }
};

struct B {
	B()=default;  //with default,we can do memory mainulate,but another can't do
};

int main(void) {

	cout << is_trivially_default_constructible<A>::value
		<< is_trivially_default_constructible<B>::value;
}

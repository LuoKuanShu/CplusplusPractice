#include <iostream>
#include <typeinfo>

using namespace std;

int main(void){
	//ref
	int i = 3,&r = i;
	auto res = r;

	cout << typeid(res).name() << endl;
	
	const int ci = i,&cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;

	auto &g = ci;
//	auto &h = 42;
	const auto &j = 42;

	cout << typeid(b).name() << " "
		<< typeid(c).name() << " "
		<< typeid(d).name() << " "
		<< typeid(e).name() << endl;
	cout << typeid(i).name() << endl;
	cout << typeid(f).name() << endl;
	cout << typeid(g).name() << endl;
//	cout << typeid(h).name() << endl;
	cout << typeid(j).name() << endl;

	auto k = ci,&l = i;
	auto &m = ci,*p = &ci;

	cout << *p << endl;
	*p = *p + 10;
	cout << *p << endl;

	auto k = ci,&l = i;
	auto &m = ci,*p = &ci;

	cout << *p << endl;
	*p = *p + 10;
	cout << *p << endl;
}


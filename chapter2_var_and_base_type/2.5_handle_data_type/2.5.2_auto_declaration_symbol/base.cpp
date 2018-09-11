#include <iostream>
#include <typeinfo>

using namespace std;

int main(void){
	double d = 23.5;
	int i = 24;
	auto res = d + i;

	cout << typeid(res).name() << endl;
	cout << res << endl;

	auto age = 20,*p = &age;  //declaration multi variable in one line.
	cout << age << " " 
		<< *p << endl;
	cout << typeid(age).name() << endl;
	cout << typeid(p).name() << endl;
	
	//auto i2 = 4,d2 = 2.3;
	

}

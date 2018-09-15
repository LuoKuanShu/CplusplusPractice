#include <iostream>

using namespace std;

void reset(int *ip);

int main(void){
	int i = 5,*p = &i;
	cout << "i is " << i << endl;
	cout << "p is " << p << endl;

	reset(p);
}

void reset(int *ip){
	cout << "change the value pointed by ip." << endl;
	*ip = 0;
	cout << "the value by ip is " << *ip << endl;

	cout << "make ip 0." << endl;
	cout << "ip is " << ip << endl;

}

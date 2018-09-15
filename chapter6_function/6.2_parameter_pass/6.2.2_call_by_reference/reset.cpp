#include <iostream>

using namespace std;

void reset(int &ri);

int main(void){
	int i = 50;
	cout << "i is " << i << endl;

	reset(i);

	cout << "now i is " << i << endl;
}

void reset(int &ri){
	ri = 0;

}

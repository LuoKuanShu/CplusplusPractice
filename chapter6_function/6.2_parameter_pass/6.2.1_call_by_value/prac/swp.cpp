#include <iostream>

using namespace std;

void swp(int *p1,int *p2);

int main(void){
	int ival1 = 5,*ip1 = &ival1;
	int ival2 = 10,*ip2 = &ival2;

	cout << "ival1 is " << ival1 << endl;
	cout << "ival2 is " << ival2 << endl;
	cout << string(18,'*') << endl;

	swp(ip1,ip2);

	cout << "ival1 is " << ival1 << endl;
        cout << "ival2 is " << ival2 << endl;

}


void swp(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

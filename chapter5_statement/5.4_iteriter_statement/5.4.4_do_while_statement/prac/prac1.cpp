#include <iostream>

using namespace std;

int main(void){
	string rsp;
	
	do {
		cout << "please enter two value: ";
		int val1,val2 = 0;
		cin >> val1 >> val2;

		int temp = 0;
		temp = val1;
		if (val1 < val2){
			val1 = val2;
			val2 = temp;
			cout << "swap." << endl;
		}
		cout << val1 << " is the big one." << endl;

		cout << "enter y for continue,n to exit." <<  endl;
		cin >> rsp;
	}while (!rsp.empty() && rsp[0] != 'n');

}

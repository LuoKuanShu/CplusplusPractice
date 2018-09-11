#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
	string rsp;

	do {
		cout << "please enter two values: ";
		int val1 = 1,val2 = 0;
		cin >> val1 >> val2;
		cout << "The sum of " << val1 << " and " << val2 
			<< " = " << val1 + val2 << "\n\n"
			<< "more? Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0]  != 'n' );
}

#include <iostream>

using namespace std;

int main(void){
	string str,pre;

	cout << "enter a value: " << endl;
	cin >> pre;

	cout <<  "enter a value: " << endl;

	while (cin >> str){
		if (str == pre){
			cout << str << endl;
			break;
		}
		pre = str;
		cout << "enter a value: " << endl;

		if (str == "exit" ){
			cout  << "nothing." << endl;
			break;
		}
	}
}

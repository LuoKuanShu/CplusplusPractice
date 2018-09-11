#include <iostream>
#include <string>

using namespace std;

int main(void){
	string root,temp;

	while (cin >> temp){
		root += temp;
		root += ' ';
		root += '\n';
	}

	cout << root << endl;

}

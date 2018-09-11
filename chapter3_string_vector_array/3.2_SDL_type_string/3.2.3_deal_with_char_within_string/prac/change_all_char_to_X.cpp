#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s = " i love you forever.";

	cout << "The s is: " 
		<< s << endl;

	for (auto &rc:s){
		rc = 'X';

	}

	cout << "The s is: "
		<< s << endl;

}

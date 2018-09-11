#include <iostream>
#include <string>

using namespace std;

int main(void){

	string s = " love ,you";
	string result;

	for (auto &rc:s){
		if(!ispunct(rc)){
			result += rc;	
		}
	}
	cout << result << endl;
}

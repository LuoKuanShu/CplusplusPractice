#include <iostream>
#include <string>

using namespace std;

int main(void){

	string s = "i love you.";

	for ((char c:s){
		c = 'X';
	}
	cout << s << endl;

}

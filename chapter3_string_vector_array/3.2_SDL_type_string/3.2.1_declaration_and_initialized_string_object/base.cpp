#include <iostream>
#include <string>

using namespace std;

int main(void){

	string s1;
	string s2 = s1;
	string s3 = "hello world.";
	string s4(10,'c');
	string s5(s4);
	

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
}

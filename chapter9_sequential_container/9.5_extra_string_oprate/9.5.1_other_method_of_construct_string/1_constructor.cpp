#include <iostream>
#include <string>

using namespace std;

int main(void) {

	//create from char array
	const char *str_arr = "hello world!!!";  //str_arr is a pointer to first char of c-style_string.
	char noNull[] = {'h','e','l','l','o'};
	string str = "love you forever.";

	string s(str_arr);
	cout << s << endl << endl; //hello world!!!

	string s1(str_arr,5);
	cout << s1 << endl << endl; //hello

	string s2(str_arr+6,5);
	cout << s2 << endl << endl; //world

	//without blank char 
	//cant do so although it doesn't raise any erro,and can run correctly
	//string s3(noNull);
	//cout << s3 << endl << endl; //hello

	string s4(noNull,2);
	cout << s4 << endl << endl; //he

	string s5(noNull+2,3);
	cout << s5 << endl << endl;  //llo
	
	string s6(str,0);
	cout << s6 << endl << endl; //love you forever.

	string s7(str,0,4);
	cout << s7 << endl << endl; //love

	//safe copy
	string s8(str,0,100);
	cout << s8 << endl << endl; //love you forever.

	//raise out_of_range error
	string s9(str,100); 
	cout << s9 << endl << endl; 


}

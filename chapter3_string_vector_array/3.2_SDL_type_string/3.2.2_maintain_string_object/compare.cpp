#include <iostream>
#include <string>

using namespace std;

int main(void){
	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";

	cout << (str < phrase) << endl;
	cout << (slang > str )<< endl;
	cout << (slang > phrase) << endl;

}

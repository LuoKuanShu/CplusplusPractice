#include <iostream>
#include <string>

using namespace std;

int main(void){
	const string hexDigits = "0123456789ABCDEF";

	cout << "Enter a series of number between 0 and 15"
		<< " separated by spaces.Hit ENTER when finished: "
		<< endl;

	string result;

	string::size_type n;   //as a index whose type is unsigned int.

	while (cin >> n){
		result += hexDigits[n];
		
	}

	cout << "Your hex number is: "
		<< result << endl;

}

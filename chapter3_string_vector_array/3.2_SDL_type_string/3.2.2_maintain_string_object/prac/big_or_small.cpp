#include <iostream>
#include <iostream>

using namespace std;

int main(void){

	string big,small,temp;

	cout << "input two string: "
		<< endl;
	cin >> big >> small;

	if(big != small){

		cout << "not equals."
			<< endl;
		if(big < small){
			temp = big;
			big = small;
			small = temp;

			cout << "big is : " 
				<< big 
				<< endl
				<< "small is " 
				<< small
				<< endl;
			return -1;
		}
	}

	cout << "equals." << endl;
	return 0;
}

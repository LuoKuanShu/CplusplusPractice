#include <iostream>

using namespace std;

int main(void){
	char ch = ' ';

	cout << "Enter a number of char style: " 
		<< endl;
	cin >> ch;

	switch(ch){
		case 'a':
			cout << "it's a." << endl;
		case 'e':
			cout << "it's e." << endl;
		case 'i': 
			cout << "it's i." << endl;
		case 'o': 
			cout << "it's o." << endl;
		case 'u': 
			cout << "it's u." << endl;
	
	}
}

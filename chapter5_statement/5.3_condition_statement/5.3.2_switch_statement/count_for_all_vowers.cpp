#include <iostream>

using namespace std;

int main(void){
	unsigned vowerCnt = 0;
	char ch = ' ';

	while (cin >> ch){
		switch(ch){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				++vowerCnt;
				break;

		}
	}
	cout << "the count that all vower occured is: " << vowerCnt << endl;

}

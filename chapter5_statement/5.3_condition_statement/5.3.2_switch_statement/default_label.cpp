#include <iostream>

using namespace std;

int main(void){
	unsigned aCnt = 0,eCnt = 0,iCnt = 0,oCnt = 0,
		 uCnt = 0;
	unsigned otherCnt = 0;
	char ch = ' ';

	while (cin >> ch){
		switch (ch){
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
			default:
				++otherCnt;
				break;
		}
	}

		cout << "Number of vower of a: " << aCnt << endl;
		cout << "Number of vower of e: " << eCnt << endl;
		cout << "Number of vower of i: " << iCnt << endl;
		cout << "Number of vower of o: " << oCnt << endl;
		cout << "Number of vower of u: " << uCnt << endl;
		cout << "Number of non-vower is: " <<
			 otherCnt << endl;

}

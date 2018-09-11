#include <iostream>

using namespace std;

unsigned arr_grades[11] = {};
int main(void){
	
	unsigned grade = 0;

	while (cin >> grade){
		++arr_grades[grade/10];
	}

	for (unsigned u : arr_grades){
		cout << u << " ";
	}


}

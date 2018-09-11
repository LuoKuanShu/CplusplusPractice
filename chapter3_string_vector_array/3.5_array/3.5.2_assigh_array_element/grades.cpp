#include <iostream>

using namespace std;


constexpr size_t size = 11;
int grade = 0;
int grades[size] = {};


int main(void){
	
	while (cin >> grade){
		++grades[grade/10];
		
	}

	for (int i : grades){
		cout << i << " ";
	}


}

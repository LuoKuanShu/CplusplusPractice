#include <iostream>

using namespace std;

int main(void){
	unsigned int start = 1;
	unsigned int end = 10;
	unsigned int sum = 0;

	for (;start != end + 1;sum += start,++start)
		cout << sum << " ";

	cout << sum << endl;
}

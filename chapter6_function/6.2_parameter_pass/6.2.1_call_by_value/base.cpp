#include <iostream>

using namespace std;

void edit(int ival);

int main(void){
	int i = 6;
	edit(i);

	cout << "but the i is " << i << endl;

}

void edit(int ival){
	ival *= ival;
	cout << "ival is " << ival << endl;
}

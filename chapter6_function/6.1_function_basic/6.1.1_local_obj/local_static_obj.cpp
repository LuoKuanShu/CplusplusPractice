#include <iostream>

using namespace std;

void count_call();
void print(int i);

int main(void){

	cout << "enter the number you like: " << endl;
	int i;
	cin >> i;

	while(true){
		if (i <= 0){

			break;
		}

		print(i);
		--i;
	}
}

void count_call(){
	static unsigned cnt = 0;
	++cnt;
	cout << cnt << " calls arready." << endl;
}

void print(int i){
	count_call();
	cout << "the result is " << i << endl;
	cout << string(20,'*') << endl << endl;

}

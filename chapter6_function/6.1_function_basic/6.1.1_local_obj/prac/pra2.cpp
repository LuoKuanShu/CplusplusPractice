#include <iostream>

using namespace std;

void count();

int main(void){
	int i = 10;

	for (;i >= 0;--i){
		count();
	}
}

void count(){
	static unsigned cnt = 0;

	cout << cnt << endl;
	++cnt;
}

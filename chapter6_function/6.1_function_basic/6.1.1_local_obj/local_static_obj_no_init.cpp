#include <iostream>

using namespace std;

void test();

int main(void){
	test();
}

void test(){
	static int i;
	cout << i << endl;

}

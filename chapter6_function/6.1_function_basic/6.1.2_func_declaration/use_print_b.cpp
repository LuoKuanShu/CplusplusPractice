#include <iostream>
#include "print_func_prototype.h"

using namespace std;


int main(void){
	print(5);
}

void print(int ival){
	cout << ival * ival << endl;

}

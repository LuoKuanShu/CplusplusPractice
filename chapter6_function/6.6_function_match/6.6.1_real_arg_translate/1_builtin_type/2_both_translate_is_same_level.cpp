#include <iostream>

using namespace std;

void f(double d){ cout << "in double." << endl;}
void f(long l){ cout << "in long."  << endl;}

int main(void){
    int i = 5;
    f(i);
}

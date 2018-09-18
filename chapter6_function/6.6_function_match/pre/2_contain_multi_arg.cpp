#include <iostream>

using namespace std;

void f(){ cout << "no arg." << endl;};
void f(int i){cout << "with one int arg." << endl;}
void f(int i1,int i2){cout << "with int int." << endl;};
void f(double d1,double d2 = 3.14){cout << "with double double." << endl;}

int main(void){
    f(2,4.3);
}


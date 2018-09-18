#include <iostream>

using namespace std;

void print(int i){ cout << "in f(int)" << endl;}
void print(double d){ cout << " in f(double) " << endl; }


int main(void){
    //declaration while initial
    void (*pfi)(int) = print;
    void (*pfd)(double) = print;
    void (*pfc)(char) = print;
    
    int i = 3;
    double d = 3.5;

    pfi(i);
    pfd(d);
}

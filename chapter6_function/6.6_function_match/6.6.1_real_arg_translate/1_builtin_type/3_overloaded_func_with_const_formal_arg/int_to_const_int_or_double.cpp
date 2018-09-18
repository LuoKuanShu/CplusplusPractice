#include <iostream>

using namespace std;

void print(const int){ cout << "in f(const int)" << endl;}
void print(double d){ cout << "in f(double)" << endl;}

int main(void){
    int i = 8;
    print(i);
}

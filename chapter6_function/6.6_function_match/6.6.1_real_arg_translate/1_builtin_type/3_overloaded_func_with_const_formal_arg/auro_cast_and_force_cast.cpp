#include <iostream>

using namespace std;

void print(int i){ cout << "in f(int)." << endl;}
void print(double d){ cout << "in f(double)" << endl;}

int main(void){
    short srt = 4;
    print(srt);
}

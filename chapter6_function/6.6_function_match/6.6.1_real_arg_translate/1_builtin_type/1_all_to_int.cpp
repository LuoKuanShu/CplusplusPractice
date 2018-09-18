#include <iostream>

using namespace std;

void f(short srt){ cout << "in short." << endl;}
void f(int i){ cout << "in int." << endl; }

int main(void){
    f('d');

}

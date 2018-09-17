#include <iostream>

using namespace std;

void print(int i);
void print(double i);

int main(void){
    int i = 7;
    double d = 5.7;

    print(d);
}

void print(int i){
    cout << i << endl;
}

void print(double d){
    cout << d << endl;
}

#include <iostream>

using namespace std;

void print(int i = 5);  //override can override default arguement more than one time.

int main(void){
    void print(int i = 8);
    void print(int i = 6);   //error,in same scope,we can't change the default real arg.    
    print();
}

void print(int i){
    cout << i << endl;
}

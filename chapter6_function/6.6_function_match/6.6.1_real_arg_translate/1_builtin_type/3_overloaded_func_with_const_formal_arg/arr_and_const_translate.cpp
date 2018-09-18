#include <iostream>

using namespace std;

void print(int *pi){ cout << "in f(int*)." << endl;}
void print(const int *pi){ cout << "in f(const int*)" << endl;}

int main(void){
    int arr[] = {1,3};

    print(arr);
}

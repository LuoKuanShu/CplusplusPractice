#include <iostream>

using namespace std;

void print(int*);
void print(double*);

int main(void){
    int i = 3,*pi = &i;
    double d = 3.4,*pd = &d;

    print(pi);
    print(pd);

}

void print(int *pi){
    cout << *pi << endl;
}

void print(double *pd){
    cout << *pd << endl;
}

#include <iostream>

using namespace std;

int print1(const int* p);
int print2(const int p[]);
int print3(const int p[19]);

int main(void){
    int a[] = {1,2,4};

    cout << "f(const int*) :  " << endl << print1(a) << endl << endl;
    cout << "f(const int[]) : " << endl << print2(a) << endl << endl;
    cout << "f(const int[19]) : " << endl << print3(a) << endl << endl;
}

int print1(const int* p){
    return *p;
}

int print2(const int p[]){
    return *p;
}

int print3(const int p[19]){
    return *p;

}

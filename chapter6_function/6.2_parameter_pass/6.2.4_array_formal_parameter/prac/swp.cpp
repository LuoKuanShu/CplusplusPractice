#include <iostream>

using namespace std;

void swp(int *p1,int *p2);

int main(void){
    int ival1 = 1,ival2 = 2;
    swp(&ival1,&ival2);

    cout << ival1 << " " << ival2;

}

void swp(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

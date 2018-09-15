#include <iostream>

using namespace std;

int main(void){
    int i = 8;
    const int *p = &i;
    //int *p2 = &(*p); //i think &(*p) is a address belong to int i,but actually it raise error said const int* can't convert to a int*,that's amazing.

    //*p2 = 48;

    //cout << *p2 << endl;
    

}

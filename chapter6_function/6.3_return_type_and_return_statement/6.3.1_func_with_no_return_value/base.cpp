#include <iostream>

using namespace std;

void swp(int &ival1,int &ival2);

int main(void){
        int i1 = 5,i2 = 87;

        cout << i1 << " " << i2 << endl;
        swp(i1,i2);

        cout << i1 << " " <<  i2 << endl;


}

void swp(int &ival1,int &ival2){
    if (ival1 == ival2){
        return;   //like break;
    }

    int temp = ival1;

    ival1 = ival2;
    ival2 = temp;

    return;    //no need.

}

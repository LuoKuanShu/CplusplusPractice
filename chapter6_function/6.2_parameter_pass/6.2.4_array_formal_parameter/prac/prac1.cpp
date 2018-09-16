#include <iostream>

using namespace std;

bool bigThan(const int i,const int *p);

int main(void){
    int i = 9;
    const int *p = &i;

    cout << bigThan(34,p);
}

bool bigThan(const int i,const int *p){
    return i > *p ?true:false;

}

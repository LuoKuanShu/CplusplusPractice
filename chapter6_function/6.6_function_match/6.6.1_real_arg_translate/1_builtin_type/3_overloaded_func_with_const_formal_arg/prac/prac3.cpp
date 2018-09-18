#include <iostream>

using namespace std;

void calc(int *a,int *b){ cout << "in f(int*,int*)}" << endl;}
void calc(int *const p,int *const b){ cout << "in f(const int*,const int*" << endl;}

int main(void){
    int i = 3;
    int *p1 = &i,*p2 = &i;
    
    calc(p1,p2);
    calc(const_cast<const int*>(p1),
         const_cast<const int*>(p2));
}

#include <iostream>

using namespace std;

int &get(int *arr,int index);

int main(void){
    size_t sz = 3;
    int a[sz] = {0,0,0};

    for (size_t i = 0;i != sz;++i){
        get(a,i) = i;
    }
    
    for (auto i : a){
        cout << i << " ";
    }
}

int &get(int *arr,int index){
    
    return arr[index];
}

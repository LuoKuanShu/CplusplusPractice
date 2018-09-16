#include <iostream>

using namespace std;

size_t arr1_s = 4;
size_t arr2_s = 2;
const size_t sz1_r = arr1_s;
const size_t sz2_r = arr2_s;
int arr1[sz1_r] = {1,2,5,6};
int arr2[sz2_r] = {3,4};

decltype(arr1) *func(int i,size_t &return_size);

int main(void){
    int i = 0;
    cout << "enter a int value: " << endl;
    cin >> i;

    size_t sz = 0;
    auto p = (*func(i,sz));    //p is a pointer point to a array first element.
    

    //output
    for (auto i : p){
        cout << i << " ";
    }

}

decltype(arr1) *func(int i,size_t &return_size){
    switch (i % 2){
        case 0:
            return_size = arr1_s;
            return &arr1;
        case 1:
            return_size = arr2_s;
            return &arr2;

    }

}

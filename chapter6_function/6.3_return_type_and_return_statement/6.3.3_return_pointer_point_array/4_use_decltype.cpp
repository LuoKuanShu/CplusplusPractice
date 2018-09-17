#include <iostream>

using namespace std;


int arr1[2] = {1,2};
int arr2[2] = {3,4};

decltype(arr1) *func(int i);

int main(void){
    int i = 0;
    cout << "enter a int value: " << endl;
    cin >> i;


   // auto p = (*func(i));    //p is a pointer point to a array first element.  //errors:begin() method is not in this scorp.
   //cause builting-array is not pointer at all. so in c++ the reference is quite important 

    //output
    for (auto i : (*func(i))){
        cout << i << " ";
    }

}

decltype(arr1) *func(int i){
    switch (i % 2){
        case 0:
            return &arr1;
        case 1:
            return &arr2;

    }

}

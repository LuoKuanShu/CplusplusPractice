#include <iostream>

using namespace std;

void print(const int arr[],size_t size);

int main(void){
    int arr[] = {1,2,3};
    print(arr,end(arr) - begin(arr));

}

void print(const int arr[],size_t size){
    for (size_t i = 0;i != size;i++){
        cout << arr[i] << " ";
    }

}

#include <iostream>
#include "fun.h"

using namespace std;


int main(void){
    int arr[get_sz()] = {1,3};

    for (auto i : arr){
        cout << i << " ";
    }
}

#include <iostream>

using namespace std;
constexpr size_t base_size(){return 2;};
constexpr size_t make_size(const size_t ctr){return ctr * base_size();}  //allow return non-const value.

void print(const int *beg,const int *end);

int main(void){
    int arr[make_size(2)] = {1,2,3,4};
    constexpr size_t sz = 1;
    int arr2[make_size(sz)] = {1,3};

    print(begin(arr2),end(arr2));
}

void print(const int *beg,const int *end){
    for (;beg != end;++beg){
        cout << *beg << " ";
    }
}

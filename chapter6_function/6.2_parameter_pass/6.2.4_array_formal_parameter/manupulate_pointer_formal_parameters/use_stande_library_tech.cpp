#include <iostream>

using namespace std;

void print(const char *beg,const char *end);

int main(void){
    char arr[2] = {'a','b'};

    print(begin(arr),end(arr));
}

void print(const char *beg,const char *end){
    while (beg != end){
        cout << *beg++;
    }
}

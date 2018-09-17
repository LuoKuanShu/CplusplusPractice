#include <iostream>

using namespace std;

string arr1[] = {"hello","world"};
string arr2[] = {"world","hello"};

decltype(arr1) *pointerS(int i);

int main(void){
    cout << "enter: " << endl;
    int i = 0;
    cin >> i;

    for (auto s : (*pointerS(i))){
        cout << s << " ";
    }
}

decltype(arr1) *pointerS(int i) {
    return (i % 2) == 0 ? &arr1 : &arr2;    
}

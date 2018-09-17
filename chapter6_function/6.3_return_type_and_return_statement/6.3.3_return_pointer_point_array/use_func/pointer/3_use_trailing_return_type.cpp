#include <iostream>

using namespace std;


auto pointerS(int i) -> string (*)[2];

string arr1[] = {"hello","world"};
string arr2[] = {"world","hello"};

int main(void){
    cout << "enter: " << endl;
    int i = 0;
    cin >> i;

    for (auto s : (*pointerS(i))){
        cout << s << " ";
    }
}

auto pointerS(int i) -> string (*)[2] {
    return (i % 2) == 0 ? &arr1 : &arr2;    
}
